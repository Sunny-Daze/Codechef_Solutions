#include<bits/stdc++.h>
using namespace std;

int main(){
		int t; 
        cin>>t;
        while(t--){
            int n; 
            cin>>n;
            int a[n],b[n];
            for(int i=0;i<n;i++){
                cin>>a[i];
            }

            
            for(int i=0;i<n;i++){
                cin>>b[i];
            }

            for(int i=n;i>=1;i--){
                a[i]-=a[i-1];
            }

            int ans=0;
            for(int i=0;i<n;i++){
                if(b[i]<=a[i]){
                    ans++;
                }
            }
            cout<<ans<<endl;
        }
	return 0;
}
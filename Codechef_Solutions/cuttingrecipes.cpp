#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin >> ar[i];
        }

        int ans=ar[0];

        for(int i=0;i<n;i++){
            ans = __gcd(ar[i],ans);
        }

        for(int i=0;i<n;i++){
            int div = ar[i]/ans;
            cout << div << " ";
        }
            cout << endl;
        }
    
    return 0;
}

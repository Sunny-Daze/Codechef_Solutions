	#include<bits/stdc++.h>
	using namespace std;

	// inline void debugMode() {	
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	// }

	int main(){
		// debugMode();
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

		int t;
		cin>>t;
		while(t--){
            int n;
            cin>>n;
            int a[n],b[n],am=0,bm=0;
            for(int i=0;i<n;i++){
                cin>>a[i];
                if(am<a[i]){
                    am=a[i];
                }
            }
            for(int i=0;i<n;i++){
                cin>>b[i];
                if(bm<b[i]){
                    bm=b[i];
                }
            }
            int alice=0,bob=0;
            for(int i=0;i<n;i++){
                alice+=a[i];
                bob+=b[i];
            }

            if((alice-am)<(bob-bm)){
                cout<<"Alice\n";
            }
            else if((alice-am)>(bob-bm)){
                cout<<"Bob\n";
            }
            else if((alice-am)==(bob-bm)){
                cout<<"Draw\n";
            }
            
            
		}

	}
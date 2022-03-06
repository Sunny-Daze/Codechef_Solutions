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
            int n,k;
            cin>>n>>k;
            int t[n], d[n];
            for(int i=0;i<n;i++){
                cin>>t[i]>>d[i];
            }

            for(int i=0;i<n;i++){
				k-=t[i];
				if(k==0){
					t[i]=k;
					break;
				}
				else if(k<0){
					t[i]=abs(k);
					break;
				}
            }
            
            int money=0;
            for(int j=0;j<n;j++){
                money+=(t[j]*d[j]);
            }
            cout<<money<<endl;
		}

	}
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
			string a[4];
			for(int i=0;i<4;i++){
				cin>>a[i];
			}

			string inp;
			int cnt(0);
			for(int i=0;i<4;i++){
				cin>>inp;
				for(int j=0;j<4;j++){
					if(inp==a[j]){
						cnt++;
					}
				}
			}

			if(cnt>=2) cout<<"similar\n";
			else cout<<"dissimilar\n";

        }

	}
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
            int n,m;
            cin>>n>>m;
            bool row=n%2;
            bool col=m%2;
            if(row && col) cout<<"NO\n";
            else cout<<"YES\n";
        }

	}
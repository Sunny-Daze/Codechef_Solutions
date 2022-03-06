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
            double n,vs,ve;
            cin>>n>>vs>>ve;

            double ds=(n*sqrt(2))/vs;
            double de=(n/ve);
            de*=2;

            if(ds<de){
                cout<<"Stairs"<<endl;
            }
            else{
                cout<<"Elevator"<<endl;
            }
		}

	}
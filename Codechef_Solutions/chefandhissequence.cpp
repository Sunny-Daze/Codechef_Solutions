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

		int t; cin>>t;
		while(t--){
			int x,y;
			cin>>x;
			int a[x];
			for(int i=0;i<x;i++){
				cin>>a[i];
			}
			cin>>y;
			int b[y];
			for(int i=0;i<y;i++){
				cin>>b[i];
			}

			int j=0,flag=0;
			for(int i=0;i<x;i++){
				if(b[j]==a[i]){
					j++;
				}
				if(j==y){
				    cout<<"Yes"<<endl;
				    flag=1;
					break;
				}
			}
			if(flag==0){
			    cout<<"No"<<endl;
			}
		}

	}
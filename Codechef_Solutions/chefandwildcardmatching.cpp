	#include<bits/stdc++.h>
	using namespace std;

	inline void debugMode() {	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	}

	int main(){
		debugMode();
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		int t;
		cin>>t;
		while(t-- > 0){
			string x,y;
			cin>>x>>y;
			int a=x.length();
			int b=y.length();
			int z=0;
			if(a==b){
			for(int i=0;i<a;i++){
				if((x[i]!=y[i]) && (x[i]!='?' && y[i]!='?')){
					z=1;
					break;
				}
			}
			cout<<((z==1) ? "No" : "Yes") << endl;
			}
		}

		return 0;
	}
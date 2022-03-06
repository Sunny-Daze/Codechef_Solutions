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
			int n,k;
			cin>>n;
			long a[100000];
			memset(a,0,sizeof(a));
			for(int i=0;i<n;i++){
				cin>>k;
				a[k]++;
			}
			for(int i=1;i<100000;i++){
				if(a[i]%2!=0){
					cout<<i<<endl;
				}
			}

		}
		return 0;
	}
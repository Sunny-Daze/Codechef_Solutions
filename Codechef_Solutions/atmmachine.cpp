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
			cin>>n>>k;
			int a[n];
			for(int i=0;i<n;i++){
				cin>>a[i];
				if(k-a[i]>=0){
					cout<<1;
					k-=a[i];
				}
				else{
				    cout<<0;
				}

			}
			cout<<endl;
		}
		return 0;
	}
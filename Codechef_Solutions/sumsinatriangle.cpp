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
	while(t--){
		int n;
		cin>>n;
		int a[n][n];
		for(int row=0;row<n;row++){
			for(int col=0;col<row+1;col++){
				cin>>a[row][col];
			}
		}
	
		for(int row=n-2;row>=0;row--){
			for(int col=0;col<row+1;col++){
				a[row][col]+=max(a[row+1][col],a[row+1][col+1]);
			}
		}
		cout<<a[0][0]<<endl;
	}

	return 0;
}
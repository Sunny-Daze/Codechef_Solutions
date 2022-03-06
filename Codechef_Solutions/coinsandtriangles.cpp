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

	int t;
	cin>>t;
	while(t--){
		int coins,sum=0,ans=0;
		cin>>coins;
		for(int i=1;i<=coins;i++){
			sum+=i;
			coins-=i;
			ans++;
		}
		cout<<ans<<endl;

	}
	return 0;
}
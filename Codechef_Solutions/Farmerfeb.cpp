#include<bits/stdc++.h>
using namespace std;

inline void debugMode() {	
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

void solve(int sum){
    int temp=sum;
while(true){
	int ans=0;
	for(int i=(sum-1);i>1;i--){
		if(sum%i==0){
			ans++;
		}
	}
		if(ans==0){
			cout<<(sum-(temp-1))<<endl;
			break;
		}
		else{
			sum++;
		}
}
}

int main(){
	debugMode();

	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		solve(x+y+1);
	}
	return 0;
}
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
	int n;
	cin>>n;
	if(n<10) cout<<1<<endl;
	else if(n>=10 && n<=99) cout<<2<<endl;
	else if(n>=100 && n<=999) cout<<3<<endl;
	else cout<<"More than 3 digits"<<endl;

	return 0;
}
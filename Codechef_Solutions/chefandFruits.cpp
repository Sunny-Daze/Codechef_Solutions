#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


int t;
cin>>t;
while(t--){
	int n,m,k;
	cin>>n>>m>>k;
	int min = abs(n-m);
	min-=k;
	if(min<0){
	    cout<<0<<endl;
	}
	else{
	    cout<<min<<endl;
	}
}

return 0;
}
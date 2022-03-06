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
	int ar[] = {2010, 2015, 2016, 2017, 2019};
	while(t--){
		int y,flag=0;
		cin>>y;
		for(int i=0;i<5;i++){
			if(ar[i]==y){
			 flag=1;
			}
		}
		if(flag==1){
			cout<<"HOSTED"<<endl;
		}
		else{
			cout<<"NOT HOSTED"<<endl;
		}

	}

	return 0;
}
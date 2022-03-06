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

	int l,w;
	cin>>l>>w;
	int area=l*w;
	int peri=2*l+2*w;

	if(area>peri){
		cout<<"Area"<<endl<<area;
	}
	else if(peri>area){
		cout<<"Peri"<<endl<<peri;
	}
	else if(peri==area){
		cout<<"Eq"<<endl<<area;
	}

	return 0;
}
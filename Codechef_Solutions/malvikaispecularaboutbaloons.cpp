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
		char str[100];
		cin>>str;
		int ac=0,bc=0;
		for(int i=0;str[i]!='\0';i++){
			if(str[i]=='a'){
				ac++;
			}
			else if(str[i]=='b'){
				bc++;
			}
		}
		if(ac>bc){ 
		    cout<<bc<<endl;
		}
		else if(bc>ac){
		    cout<<ac<<endl;
		} 
		else if(ac==0 || bc==0){
		     cout<<0<<endl;
		}
		else if(ac==bc){
		    cout<<ac<<endl;
		}
	}

	return 0;
}
	#include<bits/stdc++.h>
	using namespace std;

	// inline void debugMode() {	
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	// }

	int main(){
		// debugMode();
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		int t;
		cin>>t;
		while(t--){
			int a,b;
			cin>>a>>b;
			int sum=a+b,ans=0;
			while(sum>0){
				int mod=sum%10;
				if(mod==1) ans+=2;
				else if(mod==0 || mod==6 || mod==9) ans+=6;
				else if(mod==2 || mod==3 || mod==5) ans+=5;
				else if(mod==1) ans+=2;
				else if(mod==4) ans+=4;
				else if(mod==7) ans+=3;
				else ans+=7;
				sum/=10;
			}
		cout<<ans<<endl;
		}
		return 0;
	}
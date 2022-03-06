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
		cout.tie(NULL);

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[9],sum=0;
		memset(a,0,sizeof(a));

		while(n--){
			int p,s;
			cin>>p>>s;
			if(p<9){
				if(a[p]<s){
					a[p]=s;
				}
			}
		}

		for(int i=0;i<9;i++){
			sum+=a[i];
		}
		cout<<sum<<endl;
	}

    return 0;
    }
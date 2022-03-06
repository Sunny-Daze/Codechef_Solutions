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
		cout.tie(NULL);

		int t;
		cin>>t;
		while(t--){
            string str;
            cin>>str;
            int flag=1;	
            for(int i=0;i<str.length();i+=2){
                if(str[i]==str[i+1]){
                    flag=0;
                    break;
                }
			}
            if(flag){
                cout<<"yes\n";
            }
            else{
                cout<<"no\n";
            }
		}

	}
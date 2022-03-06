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
            int n;
            cin>>n;
            vector<int> goal;
            vector<int> foul;
            int inp;
            for(int i=0;i<n;i++){
                cin>>inp;
                goal.push_back(inp);
            }

            for(int i=0;i<n;i++){
                cin>>inp;
                foul.push_back(inp);
            }
            
            // for(auto x : goal){
            //     cout<<x<<" ";
            // }

            // cout<<endl;

            // for(auto y : foul){
            //     cout<<y<<" ";
            // }

            int maxgoal=0;
            for(int i=0;i<n;i++){
                int ans=(goal[i]*20)-(foul[i]*10);
                if(maxgoal<ans){
                    maxgoal=ans;
                }
            }

            if(maxgoal<0){
                cout<<0<<endl;
            }       
            else{
                cout<<maxgoal<<endl;
            }
		}

	}
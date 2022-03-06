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
    cin >> t;
    while(t--){
        int n,k,ans,maxx=0;
        cin>>n>>k;
        for(int i=0;i<k;i++){
            ans = n%k;
            if(ans>maxx){
                maxx = ans;
            }
        }
        cout<<maxx<<endl;
    }

    return 0;
}
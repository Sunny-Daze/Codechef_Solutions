#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        unordered_map<int,int> up;
        while(n--){
            cin>>k;
            up[k]++;
        }
        cout<<up.size()<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        unordered_map<char,int> umap;
        for(int i=0;s[i];i++){
                umap[s[i]]++;
        }
        int max=0,n=s.length();
        for(auto i=umap.begin();i!=umap.end();i++){
            if(((*i).second)>max){
                max=(*i).second;
            }
        }
        if(max*2==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
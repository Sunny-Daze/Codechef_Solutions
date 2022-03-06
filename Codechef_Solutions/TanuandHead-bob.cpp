#include<bits/stdc++.h>
using namespace std;
int main(){
    long t; cin>>t;
    while(t--){
        long n;
        cin>>n
        string s;
        cin>>s;
        long yc=0,nc=0,ic=0;
        for(int i=0;i<n;i++){
            if(s[i]=='N'){
                nc++;
            }
            else if(s[i]=='Y'){
                yc++;
            }
            else if(s[i]=='I'){
                ic++;
            }
        }
        if(nc>=0 && yc>=0 && ic==0){
            cout << "NOT INDIAN" << endl;
            continue;
        }
        else if(nc>=0 && ic>0 && yc==0){
            cout << "INDIAN" << endl;
            continue;
        }
        else if(nc==n){
            cout << "NOT SURE" << endl;
            continue;
        }
    }
    return 0;
}
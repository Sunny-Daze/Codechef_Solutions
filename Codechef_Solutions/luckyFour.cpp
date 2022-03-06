#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,s=0;
            cin >> n;
            while(n>0){
                if(n%10==4){
                    s++;
                }
                n/=10;
            }
            cout << s << endl;
        
    }

    return 0;
}
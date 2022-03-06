#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    cin >> t;
    for (int i=0;i<t;i++){
        cin >> n;
    
    int ans=0,f=0;

    ans+=n%10;

    while(n>0){
        f=n%10;
        n/=10;
    }
    ans+=f;
    cout << ans << endl;
    }
    return 0;
}
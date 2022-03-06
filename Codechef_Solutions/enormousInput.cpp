#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,i;
    cin >> n >> k;

    int ans = 0;
    int t;
    for(i=1;i<=n;i++){
        cin >> t;

        if(t%k==0){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
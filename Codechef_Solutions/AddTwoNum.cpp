#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int i,t,b,s;
    for(i=1;i<=n;i++){
        cin >> t >> b;

        s = t + b;
        cout << s << "\n";
    }

    return 0;
}

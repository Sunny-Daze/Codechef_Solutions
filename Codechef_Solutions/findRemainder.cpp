#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n
    while(n--){
        int m,p;
        cin >> m >> p;

        int d = m % p;
        cout << d << "\n";
    }


    return 0;
}
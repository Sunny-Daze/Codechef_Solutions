#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int i;
    for(i=1;i<=n;i++){
        int k;
        cin >> k;

        int sum = 0;
        while(k!=0)
        {
            sum = sum + k % 10;
            k = k/10; 
        }
        cout << sum << "\n";
    }
    return 0;
}

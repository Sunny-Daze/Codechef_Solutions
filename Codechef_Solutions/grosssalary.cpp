#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        float s;
        cin >> s;
        float gs;
        if(s>=1500){
            gs = s + 500.0 + (s*0.98);
        }
        else{
            gs = s + (s*0.1) + (s*0.9);
        }
        cout << setprecision(2) << gs << endl;
    }

  return 0;
}
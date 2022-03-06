#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int d,x,y,z,store=0;
        cin >> d >> x >> y >> z;
        int fw = x * 7;
        int sw = ((y * d) + (z * (7 - d)));
        
        if(fw>sw){
            cout << fw << endl;
        }
        else{
            cout << sw << endl;
        }

    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;

    if (a%4==0) cout << ++a << endl;
    else cout << --a << endl;

    return 0;
}
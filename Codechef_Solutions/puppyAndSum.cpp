#include<bits/stdc++.h>
using namespace std;

int sum(int n);
int sum(int d, int n);

int main(){     
    int t;
    cin >> t;
    while(t--){
        int n,d;
        cin >> d >> n;
            cout << sum(d,n) << endl;
        }
    return 0;
    }


int sum(int n){
    return n*(n+1)/2;
}

int sum(int d, int n){
    while(d--){
        n=sum(n);
    }
    return n;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int sol[n],evenCount=0,oddCount=0;
    for (int i=0;i<n;i++){
        cin >> sol[i];
        if (sol[i]%2==0){
            ++evenCount;
        }
        else{
            ++oddCount;
        }
    }
    if(evenCount> oddCount){
        cout << "READY FOR BATTLE" << endl;
    }
    else{
        cout << "NOT READY" << endl;
    }
    
    return 0;
}
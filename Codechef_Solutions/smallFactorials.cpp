#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s=1000,f[s],c=0,j=s-1;
        f[s-1]=1;
        
        while(n>1)
        {
        int x;
        for(int k=s-1;k>=j;k--){
            x = f[k]*n + c;
            f[k] = x%10;
            c = x/10; 
        }
        
        while(c>0){
            f[--j]=c%10;
            c/=10;
        }
        n--;
        }
        for(int k=j;k<s;k++){
            cout << f[k];
        }
        cout << endl;
    }
        return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;

    string a,b;
    for(int i=0;i<s.length()/2;++i){
        a=+s[i];
        b=+s[s.length()-i-1];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b){
      cout << "YES\n";
    }
    else{
      cout << "NO\n";
    }
  }
    return 0;
}

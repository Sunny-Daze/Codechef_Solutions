#include<bits/stdc++.h>
using namespace std;

inline void debugMode() { 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

void solve(int n){
  if(n%10==0) cout<<0<<endl;
  else if(n*2%10==0) cout<<1<<endl;
  else cout<<-1<<endl;
  }

int main(){
  debugMode();
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t,count=0;
  cin>>t;
  while(t--){
    int x;
    cin>>x;
    solve(x);
  }
  return 0;
}
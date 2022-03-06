    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        int t;
        cin>>t;
        while(t--){
            int r;
            cin>>r;
            char c;
            vector<int> v(3,0);
            while(r--){
                cin>>c;
                if(c=='R'){
                    v[0]++;
                }
                else if(c=='G'){
                    v[1]++;
                }
                else if(c=='B'){
                    v[2]++;
                }
            }

            sort(v.begin(),v.end());
                
                cout<<v[0]+v[1]<<endl;
        }
        return 0;
    }

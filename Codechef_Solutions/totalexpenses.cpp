    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            float q,p;
            cin >> q >> p;
            long double tp = p*q;
            if(q>=1000){
                double dis = tp*0.1;
                cout << fixed << setprecision(6) << tp-dis << endl; 
            }
            else{
                cout << fixed << setprecision(6) << tp << endl;
            }
        }

        return 0;
    }
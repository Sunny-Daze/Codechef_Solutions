#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int salary[n];
        for (int i=0;i<n;i++){
            cin >> salary[i];
            }
        int min = salary[0], max = salary[0];
        for (int i=0;i<n;i++){
            if(salary[i]>max){
                max = salary[i];
            }

            if(salary[i] < min){
                min = salary[i];
            }
        if(max==min){
            int div,count=0,ans=0;
            for (int i=0;i<n;i++){
                div = salary[i];
                while(div==0){
                    div/min;
                    count++;
                }
                ans = ans + count;
            }
            cout << "ans - " << ans << endl;
        }
        }
        

        }
    return 0;
}
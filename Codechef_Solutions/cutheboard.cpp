    #include <bits/stdc++.h>
    using namespace std;


    int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {   
        int n;
        cin>>n;
        
        int inp,evennum=0,oddnum=0;
        int evenpos=0,oddpos=0;
        for(int i=1;i<=n;i++){
            cin>>inp;
            if(inp%2==0){
                evennum++;
            }
            else{
                oddnum++;
            }

            if(i%2==0){
                evenpos++;
            }
            else{
                oddpos++;
            }
        }


        // cout<<evennum<<" "<<oddnum<<" "<<evenpos<<" "<<oddpos;

        if(evennum!=0 && oddnum!=0){
            int fa=abs(oddpos-evennum);
        if(fa==0){
            fa=evennum;
        }

        int sa=abs(evenpos-oddnum);
        if(sa==0){
            sa=oddnum;
        }

        cout<<fa+sa<<"\n";
        }
        else if(evennum==0 && oddnum!=0){
            int fa=abs(oddpos-evennum);
        if(fa==0){
            fa=evennum;
        }
        cout<<fa<<"\n";
        }
        else if(evennum!=0 && evennum==0){
            int sa=abs(evenpos-oddnum);
        if(sa==0){
            sa=oddnum;
        }
        cout<<sa<<"\n";
        }
    }
    return 0;
    }
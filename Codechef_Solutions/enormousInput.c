#include <stdio.h>

int main(){

    int n,k;
    scanf("%d%d",&n,&k);
    
    int i,ans=0,t;
    for(i=1;i<=n;i++){
        scanf("%d",&t);

        if (t%k==0)
        {
            ans++;
        }
    }
    
    printf(ans);
    
    return 0;
}
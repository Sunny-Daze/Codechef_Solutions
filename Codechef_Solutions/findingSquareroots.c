#include <stdio.h>
#include <math.h>

int main()
{

    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,s;
        scanf("%d",&n);
        s = sqrt(n);
        printf("%d",s);
    }
    return 0;
}
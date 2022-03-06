#include <iostream>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);

        int m;
        if(a>b && a>c)
        {
            m=max(b,c);
        }
        else if(b>a && b>c)
        {
            m=max(a,c);
        }
        else if(c>a && c>b)
        {
            m=max(a,b);
        }

        printf("%d\n",m);
    }
      
    return 0;
}
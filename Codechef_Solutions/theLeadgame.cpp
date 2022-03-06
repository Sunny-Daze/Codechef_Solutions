#include <iostream>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    int c1=0,c2=0,d=0,l=0,w=0;
    while (T--)
    {
        int s1,s2;
        scanf("%d %d",&s1,&s2);

        c1+=s1;
        c2+=s2;

        if(c1>c2)
        {
            d=c1-c2;
            if(d>l)
            {
                l=d;
                w=1;
            }
        }
        else
        {
            d=c2-c1;
            if(d>l)
            {
                l=d;
                w=2;
            }
        }
    }

    printf("%d %d",w,l);

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int c;
        scanf("%d",&c);
        printf("%u\n",c/2+1);
    }

    return 0;
}
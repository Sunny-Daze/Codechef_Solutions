#include <iostream>
#include <string>
using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);

        int r=0;
        while (n!=0)
        {
            int p = n%10;
            r=r*10+p;
            n/=10;
        }
        printf("%d\n",r);


    }
        printf("\n");
    

    return 0;
}
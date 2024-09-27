#include<stdio.h>
int main()
{

    int x,i=1;
    long long f=1;
    scanf("%d",&x);
    while(i<=x)
    {
        f=f*i;
        ++i;
    }
    printf("Factorial of %d is %lld",x,f);

    return 0;



}

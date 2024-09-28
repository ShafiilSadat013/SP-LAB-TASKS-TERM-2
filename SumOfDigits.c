#include<stdio.h>
int main()
{

    int x,sum=0;
    scanf("%d",&x);
    while(x!=0)
    {
        sum=sum + (x%10);
        x=x/10;
    }
    printf("sum is %d",sum);
    return 0;

}

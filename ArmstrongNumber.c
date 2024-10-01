#include<stdio.h>
int main()
{
    int x,y,sum=0,a;
    scanf("%d",&x);
    a=x;

    while(x>0)
        {
            y=x%10;
            sum = sum+(y*y*y);
            x=x/10;
        }

        if(a==sum) printf("Armstrong number");
        else printf("Not armstrong number");

        return 0;
}

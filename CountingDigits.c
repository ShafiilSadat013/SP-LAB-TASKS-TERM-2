#include<stdio.h>
int main()
{
    int x,cnt=0;
    scanf("%d",&x);
    if(x<0)
    {
        x=-x;
    }
    else if(x==0)
    {
        cnt=1;
    }
    else
    {
        while(x>0)
        {
           x=x/10;
           cnt++;
        }
    }

    printf("number of digits %d",cnt);
    return 0;

}

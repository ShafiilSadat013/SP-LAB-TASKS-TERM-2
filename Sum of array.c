#include<stdio.h>
int main()
{
    int x,sum=0;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;++i)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x;++i)
    {
        sum = sum +arr[i];

    }
    printf("Sum is %d",sum);
    return 0;

}

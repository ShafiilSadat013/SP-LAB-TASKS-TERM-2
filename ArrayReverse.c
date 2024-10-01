#include<stdio.h>
int main()
{
    int arr[100];
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;++i)
    {
        scanf("%d",&arr[i]);

    }
    printf("Rversed array is ");
    for(int i=x-1;i>=0;--i)
    {
        printf("%d ",arr[i]);

    }

    return 0;
}

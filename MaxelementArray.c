#include<stdio.h>
int main()
{
    int x,m;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;++i)
    {
        scanf("%d",&arr[i]);
    }
    m=arr[0];
    for(int i=1;i<x;++i)
    {
        if(arr[i]>m)
        {
            m=arr[i];

        }
    }

    printf("Max element is %d",m);
    return 0;

}

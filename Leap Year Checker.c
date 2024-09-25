#include<stdio.h>
int main()
{
    int y;
    scanf("%d",&y);
    switch((y%4==0&&y%100!=0)||(y%400==0))
    {
    case 1:
        printf("%d is leap year",y);
        break;
    default:
        printf("%d is not leap year",y);
        break;
    }
    return 0;

}

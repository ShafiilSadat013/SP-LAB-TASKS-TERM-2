#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>y){
        if(x>z) printf("%d is the largest",x);
        else printf("%d is the largest",z);
    }
    if(y>x){
        if(y>z) printf("%d is the largest",y);
        else printf("%d is the largest",z);
    }
    return 0;

}

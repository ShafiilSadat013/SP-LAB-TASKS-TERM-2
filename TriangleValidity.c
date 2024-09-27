#include<stdio.h>
int main()
{

    float x,y,z;
    scanf("%f%f%f",&x,&y,&z);
    if(x<0&&y<0&&z<0) printf("invalid input\n");
    else if(((x+y)>z)&&((x+z)>y)&&((y+z)>x)) printf("The triangle is valid\n");
    return 0;



}

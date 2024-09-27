#include<stdio.h>
int main()
{

    float x,y;
    scanf("%f%f",&x,&y);
    char z;
    scanf(" %c",&z);

    switch(z)
    {
    case '+':
    printf("Sum is %.2f",x+y);
    break;
    case '-':
    printf("Sub is %.2f",x-y);
    break;
    case '*':
    printf("Mult is %.2f",x*y);
    break;
    case '/':
    if(y!=0) printf("Div is %.2f",x/y);
    else printf("Error");
    break;
    default :
    printf("invalid input");
    break;
    }

    return 0;

}

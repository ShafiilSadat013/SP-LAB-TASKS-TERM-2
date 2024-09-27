#include<stdio.h>
int main()
{

    long long a;
    scanf("%lld",&a);

    if(a>0) printf("%lld is positive",a);
    else if (a<0) printf("%lld is negative",a);
    else printf("ll%d is Zero",a);
    return 0;

}

#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    x = tolower(x);
    switch(x){
        case 'a':
        printf("%c is vowel",x);
        break;
        case 'e':
        printf("%c is vowel",x);
        break;
        case 'i':
        printf("%c is vowel",x);
        break;
        case 'o':
        printf("%c is vowel",x);
        break;
        case 'u':
        printf("%c is vowel",x);
        break;
        default :
        printf("%c is consonant",x);
        break;
    }
    return 0;

}

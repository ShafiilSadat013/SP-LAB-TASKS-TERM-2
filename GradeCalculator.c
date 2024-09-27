#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    char grade;
    switch(x/10)
    {
        case 10:
        grade = 'A' ;
        break;
        case 9:
        grade = 'A' ;
        break;
        case 8:
        grade = 'A';
        break;
        case 7 :
        grade =  'A';
        break;
        case 6 :
        grade = 'B';
        break ;
        case 5 :
        grade = 'C';
        break ;
        case 4 :
        grade = 'D';
        break ;
        default :
        grade = 'F';
        break;


    }

    printf("The grade is %c",grade);
    return 0;

}

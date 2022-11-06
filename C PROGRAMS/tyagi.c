#include<stdio.h>
int main()
{
    int a , b , sum;
    int num , i , n , pass;
   
    while( pass != 1080)
    {
    printf("PLEASE ENTER YOUR SECRET PASSWORD : \n\n");
    scanf("%d", &pass);
    if(pass != 1080)
    {
    printf("--------------                    OOOPPPSSS SORRY PASSWORD DIDN'T MATCH                    -----------------\n");
    printf("**************                       PLEASE ENTER CORRECT PASSWORD                            *****************\n\n");
    }
    }

    for (i = 0; i <=100; i++)
    {
        printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~           SECRET CLASSIC CALCULATOR FOR YOU BY NISHANT TYAGI       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    printf("CHOOSE THE NUMBER 1 TO 4 \n\n");
    printf("-------------------------\n\n");
    printf("1- ADD YOUR VALUE\n");
    printf("2- SUBTRACT YOUR VALUE\n");
    printf("3- MULTIPLY YOUR VALUE\n");
    printf("4- DIVIDE YOUR VALUE\n");

    scanf("%d" ,&num);
    
switch (num)
{
case  1:
    printf("ADD YOUR VALUE: \n");
    scanf("%d%d" ,&a ,&b );
    {
    sum = a + b;
    }
    printf("ADDITION OF YOUR TWO NUMBERS = %d\n\n\n\n" , sum);
    printf(":-IF YOU WANT TO WISH ANOTHER CALCULATION PLEASE SELECT\n");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
    break;
    case 2:
    printf("SUBTRACT YOUR VALUE: \n");
    scanf("%d%d" ,&a ,&b );
    {
        sum = a - b;
        printf("SUBTRACTION OF YOUR TWO NUMBERS = %d\n\n\n\n" ,sum);
        printf("IF YOU WANT TO WISH ANOTHER CALCULATION PLEASE SELECT\n");
        printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
    }
    break;
    case 3:
    printf("MULTIPLY YOUR VALUE:\n");
    scanf("%d %d" ,&a ,&b );
    {
        sum = a * b;
    }
    printf("MULTIPLICATION OF YOUR TWO NUMBERS = %d\n\n\n\n" , sum);
    printf("IF YOU WANT TO WISH ANOTHER CALCULATION PLEASE SELECT\n");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
    break;

    case 4:
    printf("DIVIDE YOUR VALUE:\n");
    scanf("%d %d" ,&a ,&b );
    {
        sum = a/b;
    }
    printf("DIVISION OF YOUR TWO NUMBERS = %d\n\n\n\n" , sum);
    printf("IF YOU WANT TO WISH ANOTHER CALCULATION PLEASE SELECT\n");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
    break;
default:
printf("PLEASE ENTER CORRECT CHOICE\n\n");
}
   
    }
return 0;
}
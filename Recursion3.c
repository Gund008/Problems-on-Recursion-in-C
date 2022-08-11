/*
write a program which Accept number from user and return its factorial.
input-5
output-120
*/

#include<stdio.h>

int factorial(int ino)
{
    static int imult=1;
    static int icnt=0;

    if(icnt<=ino)
    {
        imult=imult*icnt;
        icnt++;
        factorial(ino);
    }
}

int main()
{
    int ivalue=0;
    int iret=0;

    printf("Enter the number:\n");
    scanf("%d",&ivalue);

    iret=factorial(ivalue);

    printf("Factorial is:%d\n",iret);

    return 0;

}


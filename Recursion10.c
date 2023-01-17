/*
Write a recursive program which display below Pattern.
Input-6
Output-A B  C D E F
*/


#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt=1;
    static char ch='A';

    if(iCnt<=iNo)
    {
        printf("%c\t",ch);
        ch++;
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue=0;

    printf("Please Enter The Number:\n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    return 0;
}


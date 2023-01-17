/*
Write a recursive program which display below Pattern.
Input-6
Output-a b c d e f
*/


#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt=1;
    static char ch='a';

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



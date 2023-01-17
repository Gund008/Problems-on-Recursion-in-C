/*
Write a recursive program which display below Pattern.
Input-5
Output-1 2 3 4 5 
*/

#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt=1;

    if(iCnt<=iNo)
    {
        printf("%d\t",iCnt);
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
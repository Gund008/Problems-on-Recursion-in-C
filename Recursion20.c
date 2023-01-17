/*
Write a Program which accept number from user  and return its Factorial
Input-5
Output-120

*/

#include<stdio.h>

int FactR(int iNo)
{
    static int iCnt=1;
    static int iFact=1;

    if(iCnt<=iNo)
    {
        iFact=iFact * iCnt;
        iCnt++;
        FactR(iNo);
    }
    return iFact;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Please Enter the Number:\n");
    scanf("%d",&iValue);
    
    iRet=FactR(iValue);
    printf("Factorial is:%d\n",iRet);

    return 0;
}
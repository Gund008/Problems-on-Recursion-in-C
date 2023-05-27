/*
Write a recursive Program which accept number from user and returns its Product of Didits

Input-523
Output-30

*/

#include<stdio.h>

int MultR(int iNo)
{
    static int iMult=1;
    int iDigit=0;
    
    if(iNo!=0)
    {
        iDigit=iNo % 10;
        iMult=iMult * iDigit;
        iNo=iNo / 10;
        MultR(iNo);
    }
    return iMult;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Please Enter Number:\n");
    scanf("%d",&iValue);

    iRet=MultR(iValue);
    printf("Product is:%d\n",iRet);

    return 0;
}

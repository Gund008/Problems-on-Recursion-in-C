/*
Write a recursive  program which accept  number from user and return Largest digit.

Input-87983
Output-9

*/

#include<stdio.h>

int MaxR(int iNo)
{
    static int iMax=0;

    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    if(iNo!=0)
    {
        iDigit=iNo % 10;
        if(iDigit>iMax)
        {
            iMax=iDigit;
        }
        iNo=iNo / 10;
        MaxR(iNo);
    }
    return iMax;
}
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Please Enter the Number:\n");
    scanf("%d",&iValue);

    iRet=MaxR(iValue);
    printf("Largest Digit:%d\n",iRet);

    return 0;
}

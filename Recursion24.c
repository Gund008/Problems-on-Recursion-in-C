/*
Write a recursive  program which accept  number from user and return Smallest digit.

Input-87983
Output-3

*/

#include<stdio.h>

int MinR(int iNo)
{
    static int iMin=9;

    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    if(iNo!=0)
    {
        iDigit=iNo % 10;
        if(iDigit<iMin)
        {
            iMin=iDigit;
        }
        iNo=iNo / 10;
        MinR(iNo);
    }
    return iMin;
}
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Please Enter the Number:\n");
    scanf("%d",&iValue);

    iRet=MinR(iValue);
    printf("Smallest Digit:%d\n",iRet);

    return 0;
}
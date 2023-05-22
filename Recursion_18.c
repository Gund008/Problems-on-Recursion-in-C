/*
Write a recursive Program which accept number from user and return summation of its Digit.

Input-879

Output-24

*/

#include<stdio.h>

int SumR(int iNo)
{
    static int iSum=0;
    int iDigit=0;
    
    if(iNo < 0)
    {
       iNo=-iNo;
    }

    if(iNo!=0)
    {
        iDigit=iNo % 10;
        iSum=iSum + iDigit;
        iNo=iNo / 10;
        SumR(iNo);
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Please Enter the Number:\n");
    scanf("%d",&iValue);

    iRet=SumR(iValue);
    printf("Summation is:%d\n",iRet);

    return 0;

}

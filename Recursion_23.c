/*
Write a recursive  program which accept  number from user and return Reverse Number.

Input-523
Output-325

*/

#include<stdio.h>

int ReverseR(int iNo)
{
    int iDigit=0;
    static int iRev=0;
    
      
    if(iNo < 0)
    {
       iNo=-iNo;
    }

    if(iNo!=0)
    {
       iDigit=iNo % 10;
       iRev=(iRev * 10)+iDigit;
       iNo=iNo / 10;
       ReverseR(iNo);
    } 
    return iRev;
}
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Please Enter the Number:\n");
    scanf("%d",&iValue);

    iRet=ReverseR(iValue);
    printf("Reverse Number:%d\n",iRet);

    return 0;
}

/*
Write a recursive Program which accept number from user and display below pattern.

Input:5
Output: 5  *  4  *  3 * 2 * 1 *

*/

#include<stdio.h>

void DisplayR(int iNo)
{
    static  int iCnt=5;
    
    if(iNo < 0)
    {
       iNo=-iNo;
    }
    
    if(iCnt>=1)
    {
        printf("%d\t",iCnt);
        printf("*\t");
        iCnt--;
        DisplayR(iNo);
    }
}
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;

    printf("Please Enter the Number:\n");
    scanf("%d",&iValue);

    DisplayR(iValue);
    return 0;

}

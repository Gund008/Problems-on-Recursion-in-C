/*
Write a recursive program which accept string from user and count number of small characters.

Input:HElloWOrlD

Output:5

*/

#include<stdio.h>

int SmallR(char *str)
{
    static int iCnt=0;
    if(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            iCnt=iCnt + 1;
        }
        str++;
        SmallR(str);
    }
    return iCnt;
}
//////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[40];
    int iRet=0;

    printf("Please Enter the String:\n");
    scanf("%[^'\n']s",Arr);

    iRet=SmallR(Arr);
    printf("Count of Small Character:%d\n",iRet);

    return 0;
}
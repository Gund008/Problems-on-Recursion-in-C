/*
Write a recursive Program which accept  number from  user and count number of character.

Input- Hello

Output-5

*/

#include<stdio.h>

int StrlenXR(char *str)
{
    static int iCnt=0;

    if(*str!='\0')
    {
        iCnt++;
        str++;
        StrlenXR(str);
    }
    return iCnt;
}

int main()
{
   char Arr[20];
   int iRet=0;

   printf("Please Enter the String:\n");
   scanf("%[^'\n']s",Arr);

   iRet=StrlenXR(Arr);
   printf("Count of Character in String:%d\n",iRet);

    return 0;
}

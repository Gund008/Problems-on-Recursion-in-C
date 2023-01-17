/*
Write a Recursive Program which accept string from user and count white spaces.

Input-HE llo WOr lD

Output-2

*/

#include<stdio.h>

int WhiteSpacesR(char *str)
{
    static int iCnt=0;
    if(*str!='\0')
    {
        if(*str==' ')
        {
            iCnt++;
        }
        str++;
        WhiteSpacesR(str);
    }
    return iCnt;
}
////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    int iRet=0;

    printf("Please Enter the String:\n");
    scanf("%[^'\n']s",Arr);

    iRet=WhiteSpacesR(Arr);
    printf("Count White Spaces:%d\n",iRet);

    return 0;
}
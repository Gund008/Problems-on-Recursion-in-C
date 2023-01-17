////Write a recursive program which display below Pattern.
//Output. a b c d e f

#include<stdio.h>

void displayR()
{
    static int iCnt=1;
    static char ch='a';

    if(iCnt<=6)
    {
        printf("%c\t",ch);
        ch++;
        iCnt++;
        displayR();
    }
}

int main()
{
    displayR();
    return 0;
}

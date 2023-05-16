////Write a recursive program which display below Pattern.
//Output. A       B       C       D       E       F

#include<stdio.h>

void displayR()
{
    static int iCnt=1;
    static char ch='A';

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

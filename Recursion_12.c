//Write a recursive program which display below Pattern.
//Output. * * * *

#include<stdio.h>

void displayR()
{
    static int iCnt=1;

    if(iCnt<=4)
    {
        printf("*\t");
        iCnt++;
        displayR();
    }
}

int main()
{
    displayR();
    return 0;
}

////Write a recursive program which display below Pattern.
//Output. 5 4 3 2 1

#include<stdio.h>

void displayR()
{
    static int iCnt=5;

    if(iCnt>=1)
    {
        printf("%d\t",iCnt);
        iCnt--;
        displayR();
    }
}

int main()
{
    displayR();
    return 0;
}

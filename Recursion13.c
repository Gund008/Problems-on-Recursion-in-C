////Write a recursive program which display below Pattern.
//Output. 1 2 3 4 5 

#include<stdio.h>

void displayR()
{
    static int iCnt=1;

    if(iCnt<=4)
    {
        printf("%d\t",iCnt);
        iCnt++;
        displayR();
    }
}

int main()
{
    displayR();
    return 0;
}

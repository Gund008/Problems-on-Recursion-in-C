//write a program which accept number from user and count number of chracter

#include<stdio.h>

int strlenX(char *str)
{
    static int iCount=0;
    if(*str!='\0')
    {
        iCount++;
        str++;    //pointer Airthmatic
        strlenX(str);
    }
    return iCount;
}
int main()
{
    char Arr[20];
    int iret=0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    iret=strlenX(Arr);

    printf("length of the string is:%d\n",iret);


    return 0;

}
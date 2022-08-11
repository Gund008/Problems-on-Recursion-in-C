//write a program which accept number from user and count number of chracter

#include<stdio.h>

int Sumdigit(int ino)
{
    static int isum=0;

    if(ino!=0)
    {
        idigit=ino%10;
        isum=isum+idigit;
        Sumdigit(ino);
    }
    return isum;
}
int main()
{
    char iValue=0;
    int iret=0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    iret=Sumdigit(ivalue);

    printf("summtion is:%d\n",iret);


    return 0;

}
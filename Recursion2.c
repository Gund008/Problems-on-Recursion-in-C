/*
write a recursive program which display below pattern .

output-1 2 3  4  5 

*/

#include<stdio.h>
void Display()
{
    static int i=0;
    if(i>0)
    {
        printf("%d\t",i);
        i--;
        Display();

    }
}
int main()
{
    Display();
    retrun 0;

}

//Write a Genric Program to find largest number from three Number.

#include<iostream>
using namespace std;

template<class T>
T Max(T No1,T No2,T No3)
{
   T Max;
   if((No1>No2)&&(No1>No3))
   { 
      Max=No1;
   }
   else if((No2>No1)&&(No2>No3))
   {
      Max=No2;
   }
   else if((No3>No1)&&(No3>No2))
   {
      Max=No3;
   }
   return Max;
}

/////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int a=11,b=12,c=13;
    int iRet=Max(a,b,c);
    printf("%d\n",iRet);

    float i=1.11f,j=1.12f,k=1.13f;
    float fRet=Max(i,j,k);
    printf("%f\n",fRet);

    return 0;

}
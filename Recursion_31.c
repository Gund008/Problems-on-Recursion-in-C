//Write a genric Program to accept N values from user and return Largest values.

#include<iostream>
using namespace std;

template<class T>
T Max(T Arr[],int iSize)
{
    T Max;
    Max=Arr[0];
    for(int iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>Max)
        {
            Max=Arr[iCnt];
        }
    }
    return Max;

}
//////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int arr[]={10,20,30,40,50};
    int iRet=Max(arr,5);
    printf("%d\n",iRet);

    float brr[]={10.0,3.7,9.8,8.7};
    float fRet=Max(brr,4);
    printf("%f\n",fRet);

    return 0;

}

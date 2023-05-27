//Write a genric Program to accept N values from user and return Largest values.

#include<iostream>
using namespace std;

template<class T>
T Min(T Arr[],int iSize)
{
    T Min;
    Min=Arr[0];
    for(int iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]<Min)
        {
            Min=Arr[iCnt];
        }
    }
    return Min;

}
/////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[]={10,20,30,40,50};
    int iRet=Min(arr,5);
    printf("%d\n",iRet);

    float brr[]={10.0,3.7,9.8,8.7};
    float fRet=Min(brr,4);
    printf("%f\n",fRet);

    return 0;

}

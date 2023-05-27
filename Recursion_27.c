#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertLast(PPNODE First,int no)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    PNODE temp=*First;
    
    newn->data=no;
    newn->next=NULL;
    

    if(*First==NULL)     //if linked list empty
    {
        *First=newn;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }     
        temp->next=newn;
    }
}
////////////////////////////////////////////////////////////////////////////////////////

void DisplayReverse(PNODE First)
{
    if(First!=NULL)
    {
        DisplayReverse(First->next);
        printf("| %d |->",First->data);
    }
}

///////////////////////////////////////////////////////////////////////////////////////

int CountR(PNODE First)
{
    static int iCnt=0;
    if(First!=NULL)
    {
        iCnt++;
        First=First->next;
        CountR(First);
    }
    return iCnt;
    
}

//////////////////////////////////////////////////////////////////////////////////////
int main()
{
    PNODE Head=NULL;
    int iRet=0;
  
    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);
    InsertLast(&Head,133);

    DisplayReverse(Head);

    iRet=CountR(Head);
    printf("\nCount of Linked list:%d\n",iRet);

    return 0;
}

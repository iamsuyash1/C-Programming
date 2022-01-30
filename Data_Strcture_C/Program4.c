// SINGLY LINEAR LINKED LIST
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    //Step-1 : Allocate the Memory
    newn = (PNODE)malloc(sizeof(NODE)); 

    // Step-2 : Initialize the node
    newn->data = no;
    newn->next = NULL;

    //Step-3 : Insert the node
    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }   
}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    //Step-1 : Allocate the Memory
    newn = (PNODE)malloc(sizeof(NODE)); 

    // Step-2 : Initialize the node
    newn->data = no;
    newn->next = NULL;

    //Step-3 : Insert the node
    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while (temp->next != NULL )
        {
            temp = temp->next;
        }
        temp->next = newn;        
    }
}

void InsertAtPos(PPNODE Head, int no, int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    PNODE connect = NULL;
    temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    int iCnt = 1;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while (iCnt != (pos-1))
        {
            temp = temp->next;
            iCnt++;
        }
        connect = temp->next;
        temp->next = newn;
        newn->next = connect;
    }
    
}

void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("%d\t",Head->data);
        Head = Head->next;
    }
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while (Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;
    
    if (*Head == NULL)
    {
        return;
    }
    else
    {
        *Head = (*Head)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if (*Head == NULL)  //LL is empty
    {
        return;
    }
    else if ((*Head)->next == NULL) //LL contains one
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }   
}

int main(int argc, char const *argv[])
{
    PNODE first = NULL;
    int iRet = 0;
    
    InsertFirst(&first,101);
    InsertFirst(&first,51); //InsertFirst(50,51); (50 is address of first book diagram)
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,111);
    InsertAtPos(&first,3232,2);

    Display(first);
    printf("\n");

    /*iRet = Count(first);
    printf("Count of elements is :  %d\n",iRet);
    //DeleteFirst(&first);
    //Display(first);
    DeleteLast(&first);
    Display(first);*/
    return 0;
}








/*
    void InsertFirst(PPNODE Head, int no)
    void InsertLast(PPNODE Head, int no)
    void InsertAtPos(PPNODE Head, int no, int pos)

    void DeleteFirst(PPNODE Head)
    void DeleteLast(PPNODE Head)
    void DeleteAtPos(PPNODE Head, int pos)

    void Display(PNODE Head)
    int Count(PNODE Head)
*/
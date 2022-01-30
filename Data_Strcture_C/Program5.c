//Singly Linear Linked List
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* next;

} NODE,*PNODE,**PPNODE;

void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("|%d|->", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
    
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

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;


    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
    printf("%d\n",newn->data);
    
}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void InsertAtPos(PPNODE Head, int no, int iPos)
{
    int size = 0;
    size = Count(*Head);

    int iCnt = 0;

    PNODE newn = NULL; 
    PNODE temp = *Head;
    
    if ((iPos < 1) || (iPos > size + 1))
    {
        return;
    }
    if (iPos == 1)
    {
        InsertFirst(Head,no);
    }
    else if (iPos == size+1)
    {
        InsertLast(Head,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;

        for ( iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }    
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;
    if (*Head != NULL)
    {
        *Head = (*Head)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if (*Head == NULL)
    {
        return;
    }
    else if ((*Head)->next == NULL)
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

void DeleteAtPos(PPNODE Head, int iPos)
{
    int size = 0;
    size = Count(*Head);

    int iCnt = 0;

    PNODE newn = NULL; 
    PNODE temp = *Head;
    PNODE targeted = NULL;
    
    if ((iPos < 1) || (iPos > size))
    {
        return;
    }
    if (iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if (iPos == size)
    {
        DeleteLast(Head);
    }
    else
    {
        for ( iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        targeted = temp->next;
        temp->next = targeted->next;
        free(targeted);
        targeted = NULL;
    }    
}

int main(int argc, char const *argv[])
{
    PNODE first = NULL;

    int iChoice = 1, value = 0, iRet = 0, pos=0;

    while (iChoice != 0)
    {
        printf("Enter the desired operation that you want to perform on linked list\n");
        printf("1 : Insert the node at first position\n");
        printf("2 : Insert the node at last position\n");
        printf("3 : Insert the node at desired position\n");

        printf("4 : Delete the node at first position\n");
        printf("5 : Delete the node at last position\n");
        printf("6 : Delete the node at desired position\n");

        printf("7 : Display the contents of linked list\n");
        printf("8 : Count the number of nodes from the linked list\n");
        printf("0 : Terminate the application\n");
        printf("__________________________________________________________________________\n");
        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1:
                printf("Enter the data to insert\n");
                scanf("%d",&value);
                InsertFirst(&first,value);
                break;

            case 2:
                printf("Enter the data to insert\n");
                scanf("%d",&value);
                InsertLast(&first,value);
                break;

            case 3:
                printf("Enter the data to insert\n");
                scanf("%d",&value);
                printf("Enter the position\n");
                scanf("%d",&pos);
                InsertAtPos(&first,value,pos);
                break;

            case 4:
                DeleteFirst(&first);
                break;

            case 5:
                DeleteLast(&first);
                break;

            case 6:
                printf("Enter the position\n");
                scanf("%d",&pos);
                DeleteAtPos(&first,pos);
                break;

            case 7:
                printf("Data from linked list is: \n");
                Display(first);
                break;

            case 8:
                iRet = Count(first);
                printf("Count of elements is : %d\n",iRet);
                break;

            case 0:
                printf("Thank you for using Marvellous Linked List\n");
                break;

            default:
                printf("Please enter the proper choice\n");

        }
    }
    
    return 0;
}



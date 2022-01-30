//DOUBLY linear linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
	int data;
	struct node* next;
	struct node* prev;

} NODE,*PNODE,**PPNODE;

void Display(PNODE Head)
{
	while (Head != NULL)
	{
		printf("|%d|->",Head->data);
		Head = Head->next;
	}
	printf("NULL\n");	
}

int Count(PNODE Head)
{
	PNODE temp = Head;
	int iCnt = 0;

	while (temp->next != NULL)
	{
		iCnt++;
		temp = temp->next;
	}
	return iCnt;
}

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;

	if (*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		(*Head)->prev = newn;

		*Head = newn;
	}
}
void InsertLast(PPNODE Head, int no)
{
	PNODE temp = *Head;
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;

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
		newn->prev = temp;
	}
}

void InsertAtPos(PPNODE Head, int no, int iPos)
{
	PNODE newn = NULL;
	PNODE temp = *Head;
	int iSize = Count(*Head);
	int iCnt = 1;

	if ((iPos < 1) || (iPos > iSize+1))
	{
		return;
	}
	else if (iPos == 1)
	{
		InsertFirst(Head,no);
	}
	else if (iPos == (iSize + 1))
	{
		InsertLast(Head,no);
	}
	else
	{
		newn = (PNODE)malloc(sizeof(NODE));
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;

		while (iCnt < (iPos-1))
		{
			temp = temp->next;
			iCnt++;
		}
		newn->next = temp->next;
		newn->next->prev = newn;
        newn->prev = temp;
		temp->next = newn;
	}	
}

void DeleteFirst(PPNODE Head)
{
	PNODE temp = NULL;
	temp = *Head;
	if (*Head != NULL)
	{
		*Head = (*Head)->next;
        free(temp);

        if (*Head != NULL)
        {
            (*Head)->prev = NULL;
        }
        
	}
	
}

void DeleteLast(PPNODE Head)
{
	PNODE temp = *Head;

	if (*Head == NULL)
	{
		return;
	}
	if ((*Head)->next == NULL)
	{
		free(*Head);
        *Head = NULL;
	}
	else
	{
		while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->prev->next = NULL; 
        free(temp);	
	}	
}

void DeleteAtPos(PPNODE Head, int iPos)
{
	int iSize = Count(*Head);
	
	PNODE temp = *Head;

	if ((iPos < 1) || (iPos > iSize))
	{
		return;
	}
	if (iPos == 1)
	{
		DeleteFirst(Head);
	}
	else if (iPos == iSize)
	{
		DeleteLast(Head);
	}
	else
	{
        int iCnt = 1;
		while (iCnt != (iPos-1))
		{
			temp = temp->next;
            iCnt++;
		}
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
		
	}	
}

int main(int argc, char const *argv[])
{
	PNODE first = NULL;
	int iRet = 0, value = 0, iChoice = 1, pos = 0;

	while (iChoice != 0)
	{
		printf("==========================================================+++++++++++++++++++++++\n");
		printf("Select the option to perform operation on doubly linear linked list\n");
		printf("==========================================================+++++++++++++++++++++++\n");
		printf("1 : Insert node at first position\n");
		printf("2 : Insert node at Last position\n");
		printf("3 : Insert node at Desired position\n");
		printf("4 : Delete node at first position\n");
		printf("5 : Delete node at Last position\n");
		printf("6 : Delete node at Desired position\n");
		printf("7 : To display data from linked list\n");
		printf("8 : Number of elements of linked list\n");
		printf("0 : Terminate the Application\n");
		printf("==========================================================+++++++++++++++++++++++\n");
		scanf("%d",&iChoice);

		switch (iChoice)
		{
		case 1:
			printf("Enter the data :\n");
			scanf("%d",&value);
			InsertFirst(&first,value);
			break;

		case 2:
			printf("Enter the data :\n");
			scanf("%d",&value);
			InsertLast(&first,value);
			break;

		case 3:
			printf("Enter the desired position : \n");
			scanf("%d",&pos);
			printf("Enter the data :\n");
			scanf("%d",&value);
			InsertAtPos(&first,value,pos);
			break;

		case 4:
			DeleteFirst(&first);
			break;
		
		case 5:
			DeleteLast(&first);
			break;

		case 6:
			printf("Enter desired position to delete : \n");
			scanf("%d",&pos);
			DeleteAtPos(&first,pos);
			break;
		
		case 7:
			Display(first);

		case 8:
			iRet = Count(first);
			printf("Number of elements in the linked list are: %d\n",iRet);

		case 0:
			printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("______Thank You For Using Don's Doubly Linear Linked List______\n");
			printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

		
		default:
			printf("Enter the proper choice\n");
			break;
		}
	}

	return 0;
}
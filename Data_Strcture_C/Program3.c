#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void fun(PNODE ptr)
{

}

void gun(PPNODE qtr)
{

}

int main(int argc, char const *argv[])
{
    PNODE first = NULL;

    fun(first);     //fun(100)  Display(), Count()

    gun(&first);    //  gun(50)   InsertFirst(), InsertLast(), InsertAtPos(), 
                    //            DeleteFirst(), DeleteLast(), DeleteAtPos()

    return 0;
}

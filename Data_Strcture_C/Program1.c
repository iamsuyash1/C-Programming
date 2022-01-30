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
    
int main(int argc, char const *argv[])
{
    NODE obj;

    obj.data = 11;
    obj.next = NULL;

    PNODE p = NULL;
    p = &obj;

    PPNODE q = NULL;
    q = &p;
    
    printf("%d\n",(*q)->data);
    return 0;
}

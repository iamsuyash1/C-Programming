#include<stdio.h>
#include<stdlib.h>

/*
    Accept N numbers from user and display all such 
    elements which are divisible by 5.

    Input : N : 6
    Elements :85 66 3 80 93 88
    
    Output : 85 80
*/

void DisplayDivBy5 (int* Brr, int size)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < size; iCnt++,Brr++)
    {
        if((*Brr) % 5 == 0)
        {
            printf("%d\t",*Brr);
        }
    }
}

int main(int argc, char const *argv[])
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the size of array: \n");
    scanf("%d",&iSize);

    ptr = (int*) malloc(iSize*sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not gets allocated\n");
        return -1;
    }
    
    printf("Enter the elements:\n");

    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&ptr[i]);
    }

    DisplayDivBy5(ptr,iSize);
    free(ptr);
    return 0;
}

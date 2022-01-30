#include<stdio.h>
#include<stdlib.h>

/*
    Accept N numbers from user and display all such elements 
    which are multiples of 11.

    Input : N : 6
    Elements :85 66 3 55 93 88

    Output : 66 55 88
*/

void DisplayDivBy11(int Brr[], int size)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < size; iCnt++)
    {
          if (Brr[iCnt]%11==0)
          {
              printf("%d\t",Brr[iCnt]);
          }          
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the size of array: \n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize*sizeof(int));

    printf("Enter the elements\n");

    for (int i = 0; i < iSize; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Ans is: \n");
    DisplayDivBy11(ptr,iSize);
    free(ptr);
    
    return 0;
}

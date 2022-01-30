#include<stdio.h>
#include<stdlib.h>

/*
    Accept N numbers from user and display all such elements which 
    are divisible by 3 and 5.

    Input : N : 6
    Elements :85 66 3 15 93 88
    
    Output : 15
*/

void DisplayDivBy3and5(int Brr[], int size)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < size; iCnt++)
    {
          if (Brr[iCnt]%3==0 && Brr[iCnt]%5==0)
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
    DisplayDivBy3and5(ptr,iSize);
    free(ptr);
    
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

/*
    Accept N numbers from user and return difference between summation 
    of even elements and summation of odd elements.

    Input : N : 6
    Elements :85 66 3 80 93 88
    Output : 53 (234 - 181)
*/

int DiffEvenOdd(int* Brr, int size)
{
    int iCnt = 0, iEvenSum = 0, iOddSum = 0, iDiff = 0; 

    for ( iCnt = 0; iCnt < size; iCnt++ )
    {
        if(*Brr % 2 == 0 )
        {
            iEvenSum += (*Brr);
        }
        if(*Brr % 2 != 0)
        {
            iOddSum += (*Brr);
        }
        Brr++;
    }
    iDiff = iEvenSum - iOddSum;

    return iDiff;    
}

int main(int argc, char const *argv[])
{
    int iSize = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the size of array:\n");
    scanf("%d",&iSize);

    ptr = (int*) malloc(iSize*sizeof(int));


    if(ptr == NULL)
    {
        printf("Memory not gets allocated\n");
        return -1;
    }

    printf("Enter the elements:\n");

    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = DiffEvenOdd(ptr,iSize);

    printf("Difference is: %d \n",iRet);
    free(ptr);

    return 0;
}

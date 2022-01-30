#include<stdio.h>
#include<stdlib.h>

/*
    Accept N numbers from user and return product of all odd elements.

    Input : N : 6
    Elements :15 66 3 70 10 88
    Output : 45

    Input : N : 6
    Elements :44 66 72 70 10 88
    Output : 0

*/

int ProductOdd(int *Arr, int size)
{
    int iCnt = 0; int iProduct = 1;

    for (int  i = 0; i < size; i++)
    {
        if (Arr[i]%2!=0)
        {
            iProduct*=Arr[i];
            iCnt++;
        }       
    }
    if(iCnt == 0)
        return iCnt;
    else
        return iProduct;    
}

int main(int argc, char const *argv[])
{
    int iSize = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter the Size of Array\n");
    scanf("%d",&iSize);

    Brr = (int*) malloc(iSize*sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements\n");

    for (int i = 0; i < iSize; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = ProductOdd(Brr,iSize);
    printf("Product of Odd number is: %d\n",iRet);
    free(Brr);
    return 0;
}

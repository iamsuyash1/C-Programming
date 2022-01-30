#include<stdio.h>
#include<stdlib.h>

/*
    Accept N numbers from user and return frequency of even numbers.

    Input : N : 6
    Elements :85 66 3 80 93 88
    Output : 3

*/

int CountEven(int *Arr, int size)
{
    int iCnt = 0;

    for (int  i = 0; i < size; i++)
    {
        if (Arr[i]%2==0)
        {
            iCnt++;
        }       
    }
    return iCnt;    
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

    iRet = CountEven(Brr,iSize);
    printf("Count of even number is: %d\n",iRet);
    free(Brr);
    return 0;
}

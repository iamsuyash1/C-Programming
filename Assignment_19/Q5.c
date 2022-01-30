#include<stdio.h>
#include<stdlib.h>

/*
    Accept N numbers from user and return the difference between largest 
    and smallest number.

    Input : N : 6
    Elements :85 66 3 66 93 88
    Output : 90 (93 -3)
*/

void DisplaySumDigit(int *Arr, int size)
{
    int i = 0, iDigCnt = 0, iDigit = 0, iNo = 0, iSumDig = 0;

    for ( i = 0; i < size; i++)
    {
        iNo = Arr[i];

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iSumDig = iSumDig + iDigit;
            iNo = iNo/10;
        }
        printf("%d\t",iSumDig);
        iSumDig = 0;            
    }        
}

int main(int argc, char const *argv[])
{
    int iSize = 0;
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

    DisplaySumDigit(Brr,iSize);
    free(Brr);
    return 0;
}

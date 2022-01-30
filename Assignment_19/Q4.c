#include<stdio.h>
#include<stdlib.h>

/*
    Accept N numbers from user and return the difference between largest 
    and smallest number.

    Input : N : 6
    Elements :85 66 3 66 93 88
    Output : 90 (93 -3)
*/

void ThreeDigitNum(int *Arr, int size)
{
    int i = 0, iDigCnt = 0, iNo = 0;

    for ( i = 0; i < size; i++)
    {
        iNo = Arr[i];

        while (iNo != 0)
        {
            iDigCnt++;
            iNo = iNo/10;
        }
        if (iDigCnt == 3)
        {
            printf("%d\t",Arr[i]);
        }
        iDigCnt = 0;             
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

    ThreeDigitNum(Brr,iSize);
    free(Brr);
    return 0;
}

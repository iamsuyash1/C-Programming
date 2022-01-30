#include<stdio.h>
#include<stdlib.h>

/*    
    Accept N numbers from user and return frequency of 11 form it.
    
    Input : N : 6
    Elements :85 66 3 15 93 88
    Output : 0

    Input : N : 6
    Elements :85 11 3 15 11 111
    Output : 2
*/

int CountFrequency (int *Arr, int size)
{
    int iCnt = 0;

    for (int  i = 0; i < size; i++)
    {
        if (Arr[i]==11)
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

    iRet = CountFrequency(Brr,iSize);
    printf("Count of 11 is: %d\n",iRet);
    free(Brr);
    return 0;
}

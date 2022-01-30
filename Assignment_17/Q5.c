#include<stdio.h>
#include<stdlib.h>

/*    
    Accept N numbers from user and accept one another number as NO , 
    return frequency of NO form it.

    Input : N : 6
    NO: 66
    Elements :85 66 3 66 93 88
    Output : 2

    Input : N : 6
    NO: 12
    Elements :85 11 3 15 11 111
    Output : 0

*/

int CountFrequency (int *Arr, int size, int no)
{
    int iCnt = 0;

    for (int  i = 0; i < size; i++)
    {
        if (Arr[i]==no)
        {
            iCnt++;
        }       
    }
    return iCnt;    
}

int main(int argc, char const *argv[])
{
    int iSize = 0, iRet = 0, iNo = 0;
    int *Brr = NULL;

    printf("Enter the Size of Array\n");
    scanf("%d",&iSize);

    printf("Enter the number\n");
    scanf("%d",&iNo);

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

    iRet = CountFrequency(Brr,iSize,iNo);
    printf("Count of %d is: %d\n",iNo,iRet);
    free(Brr);
    return 0;
}

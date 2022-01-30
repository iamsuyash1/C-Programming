#include<stdio.h>
#include<stdlib.h>

/*
    Accept N numbers from user and accept one another number as NO , 
    return index of first occurrence of that NO.

    Input : N : 6
    NO: 66
    Elements :85 66 3 66 93 88
    Output : 1
    
    Input : N : 6
    NO: 12
    Elements :85 11 3 15 11 111
    Output : -1
*/

int FirstOccurence(int *Arr, int size, int no)
{
    int i = 0;

    for (i = 0; i < size; i++)
    {
        if (Arr[i]==no)
        {
            break;
        }       
    }
    return i;  
}

int main(int argc, char const *argv[])
{
    int iSize = 0, iRet = 0, iNo = 0;
    int *Brr = NULL;

    printf("Enter the Size of Array\n");
    scanf("%d",&iSize);

    printf("Enter the Number\n");
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

    iRet = FirstOccurence(Brr,iSize,iNo);
    printf("First Index is: %d\n",iRet);
    free(Brr);
    return 0;
}

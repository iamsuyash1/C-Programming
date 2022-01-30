#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
    Accept N numbers from user and accept one another number as NO , 
    check whether NO is present or not.

    Input : N : 6
    NO: 66
    Elements :85 66 3 66 93 88
    Output : TRUE

    Input : N : 6
    NO: 12
    Elements :85 11 3 15 11 111 
    Output : FALSE

*/

bool CheckNumPresent(int *Arr, int size, int no)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < size; iCnt++)
    {
        if (Arr[iCnt]==no)
        {
            break;
        }
    }

    if (iCnt < size)
    {
        return true;
    }
    else
        return false;  
       
}

int main(int argc, char const *argv[])
{
    int iSize = 0, iNo = 0; 
    bool bRet = false;
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

    bRet = CheckNumPresent(Brr,iSize,iNo);
    if (bRet == true)
    {
        printf("%d is present\n",iNo);
    }
    else
        printf("%d is Absent\n",iNo);
    
    free(Brr);
    
    return 0;
}

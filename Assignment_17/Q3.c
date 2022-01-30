#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
    Accept N numbers from user check whether that numbers contains 11 in 
    it or not.

    Input : N : 6
    Elements :85 66 11 80 93 88
    Output : 11 is present

    Input : N : 6
    Elements :85 66 3 80 93 88
    Output : 11 is absent

*/

bool CheckNumPresent(int *Arr, int size)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < size; iCnt++)
    {
        if (Arr[iCnt]==11)
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
    int iSize = 0; 
    bool bRet = false;
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

    bRet = CheckNumPresent(Brr,iSize);
    if (bRet == true)
    {
        printf("11 is present\n");
    }
    else
        printf("11 is Absent\n");
    
    free(Brr);
    
    return 0;
}

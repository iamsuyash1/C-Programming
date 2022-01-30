//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int CheckFirstOccur(int*, int,int);
//========================================================================================================================================================================
//Main.c
int main(int argc, char const *argv[])
{
    int *Arr = NULL;
    int iRet = 0;
    int iSize = 0, iCnt = 0, iNo = 0;

    printf("Enter the size of Array: \n");
    scanf("%d",&iSize);

    Arr = (int*) malloc(iSize*sizeof(int));

    if (Arr == NULL)
    {
        printf("Memory not gets Allocated\n");

        return -1;
    }
    printf("Enter the element\n");
    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    printf("Entered data is :\n");
    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");   

    printf("Enter the number which you want to search\n");
    scanf("%d",&iNo);
    
    iRet = CheckFirstOccur(Arr,iSize,iNo);
    if (iRet == -1)
    {
        printf("There is no number\n");
    }
    else
    {
        printf("Number is there at the Index: %d\n",iRet);
    }
    free(Arr);

    return 0;
}
//========================================================================================================================================================================
//Helper.c
int CheckFirstOccur(int *Brr, int size, int no)
{
    int iCnt = 0; 
    //bool bret = false; //flag

    for(iCnt = 0; iCnt < size; iCnt++)
    {   

        if(Brr[iCnt] == no)
        {
            break;      
        }
    }

    if (iCnt == size)
    {
        return -1;
    }
    else if(iCnt<size)
    {
        return iCnt;
    }
}


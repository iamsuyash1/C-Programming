//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdlib.h>
int AddOddNum(int*, int);
//========================================================================================================================================================================
//Main.c
int main(int argc, char const *argv[])
{
    int *Arr = NULL;
    int iRet = 0;
    int iSize = 0, iCnt = 0;
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

    iRet = AddOddNum(Arr,iSize);
    printf("Addition of of Odd numbers are: %d\n",iRet);

    free(Arr);

    return 0;
}
//========================================================================================================================================================================
//Helper.c
int AddOddNum(int *Brr, int size)
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 0; iCnt < size; iCnt++)
    {
        if(*Brr % 2 != 0)
        {
            iSum+=(*Brr);
        }
        Brr++;
    }

    return iSum;
}
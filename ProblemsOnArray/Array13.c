//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool SearchNum(int*, int,int);
//========================================================================================================================================================================
//Main.c
int main(int argc, char const *argv[])
{
    int *Arr = NULL;
    bool iRet = false;
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
    
    iRet = SearchNum(Arr,iSize,iNo);
    if (iRet == true)
    {
        printf("Number is there\n");
    }
    else
        printf("Number is not there\n");

    free(Arr);

    return 0;
}
//========================================================================================================================================================================
//Helper.c
bool SearchNum(int *Brr, int size, int no)
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
        return false;
    }
    else if(iCnt<size)
    {
        return true;
    }
}


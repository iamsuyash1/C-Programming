//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdlib.h>

//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    
    int iSize = 0 ;
    //int Arr[iSize]; //Array of 5 integers
    int *ptr = NULL;

    ptr = (int*) malloc(iSize * sizeof(int));

    printf("Enter the size of array \n");
    scanf("%d",&iSize);
    printf("Enter the elements of the array\n");

    int iSum = 0;

    for ( int iCnt = 0; iCnt < iSize; iCnt++ )
    {
        scanf("%d",&ptr[iCnt]); 
        iSum += ptr[iCnt];      
    }   
        printf("\nAddition is : %d\n",iSum);
        
    return 0;
}
//========================================================================================================================================================================
//Helper.c


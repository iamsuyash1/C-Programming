#include<stdio.h>
#include<stdlib.h>

/*
    Accept N numbers from user and accept Range, Display all elements from 
    that range

    Input : N : 6
    Start: 60
    End : 90
    Elements :85 66 3 76 93 88
    Output : 66 76 88

    Input : N : 6
    Start: 30
    End : 50
    Elements :85 66 3 76 93 88
    Output :
*/

void DisplayRange(int *Arr, int size, int start,int end)
{
    int i = 0;

    for (i = 0; i < size; i++)
    {
        if (Arr[i]>=start && Arr[i]<=end)
        {
            printf("%d\t",Arr[i]);        
        }       
    }
      
}

int main(int argc, char const *argv[])
{
    int iSize = 0, iStart = 0, iEnd = 0;
    int *Brr = NULL;

    printf("Enter the Size of Array\n");
    scanf("%d",&iSize);

    printf("Enter the Start:\n");
    scanf("%d",&iStart);

    printf("Enter the End:\n");
    scanf("%d",&iEnd);

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

    printf("Numbers are: \n");
    DisplayRange(Brr,iSize,iStart,iEnd);
    free(Brr);
    return 0;
}

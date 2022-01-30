#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
//#include<io.h>  : Windows

int main(int argc, char const *argv[])
{
    int fdsrc = 0;
    int fddest = 0;
    int iRet = 0;
    char Fname1[30];
    char Fname2[30];
    char Buffer[1024];    //Mug

    printf("Enter the Source filename\n");
    scanf("%s",Fname1);

    
    fdsrc = open(Fname1,O_RDONLY); 

    if(fdsrc == -1)
    {
        printf("Unable to open file\n");
        return -1; //return to OS
    }
    else
    {
        printf("File Successfully opened with FDSRC : %d\n",fdsrc);
    }

    printf("Enter destination File name \n");
    scanf("%s",Fname2);

    fddest = creat(Fname2,0777); 

    if(fddest == -1)
    {
        printf("Unable to create the file\n");
        return -1;
    }
    else
    {
        printf("File Successfully created with FDDEST : %d\n",fddest);
    }

    while ((iRet = read(fdsrc,Buffer,sizeof(Buffer))) != 0)
    {
        write(fddest,Buffer,iRet);
    }
    close(fdsrc);
    close(fddest);

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
//#include<io.h>  : Windows

int main(int argc, char const *argv[])
{
    int fd = 0;
    int iRet = 0;
    char Fname[30];
    char Buffer[10];    //Mug

    printf("Enter the filename\n");
    scanf("%s",Fname);

    
    fd = open(Fname,O_RDONLY); 

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1; //return to OS
    }
    else
    {
        printf("File Successfully opened with FD : %d\n",fd);
    }

    while ((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        write(1,Buffer,iRet);
    }
    

    close(fd);

    return 0;
}

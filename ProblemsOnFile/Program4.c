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
    char Data[] = "Marvellous Infosystems";

    printf("Enter the filename\n");
    scanf("%s",Fname);

    
    fd = open(Fname,O_RDWR); 

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1; //return to OS
    }
    else
    {
        printf("File Successfully opened with FD : %d\n",fd);
    }

    iRet = write(fd,Data,22);

    printf("%d bytes gets successfully written in the file\n",iRet);

    return 0;
}

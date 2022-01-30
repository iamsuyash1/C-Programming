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
    char Data[6];

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

    iRet = read(fd,Data,6);

    printf("%d bytes gets successfully read from the file\n",iRet);

    printf("Data from the file is\n");

    write(1,Data,iRet); // 1 : console

    close(fd);

    return 0;
}

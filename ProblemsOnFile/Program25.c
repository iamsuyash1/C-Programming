
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
//#include<io.h>  : Windows

int main(int argc, char const *argv[])
{
    int fd = 0;
    int iRet = 0;
    char fname[20];
    

    printf("Enter the file name\n");
    scanf("%s",fname);

    fd = open(fname,O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }   

    iRet = lseek(fd,0,2);

        
    printf("File Size : %d\n",iRet);

    close(fd);
    return 0;
}

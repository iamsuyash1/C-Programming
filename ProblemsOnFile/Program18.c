
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
//#include<io.h>  : Windows

int main(int argc, char const *argv[])
{
    int fd = 0;

    fd = open("LB17.txt",O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    //////////////////
    // 0 Starting position
    // 1 From current position
    // 2 From end of the file

    lseek(fd,10,2);

    write(fd,"*",1);

    close(fd);
    return 0;
}

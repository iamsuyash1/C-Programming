
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
//#include<io.h>  : Windows

int main(int argc, char const *argv[])
{
    int fd = 0;
    char Arr[10];

    fd = open("LB17.txt",O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open file\n");
    }
    //////////////////
    // 0 Starting position
    // 1 From current position
    // 2 From end of the file

    lseek(fd,-5,2);

    read(fd, Arr, 5);

    write(1,Arr,5);

    printf("\n");

    close(fd);
    
    //lseek(fd,10,2);
    //write(fd," ",1);
    return 0;
}

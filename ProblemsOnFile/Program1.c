#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
//#include<io.h>  : Windows

int main(int argc, char const *argv[])
{
    int fd = 0;

    fd = creat("Marvellous.txt",0777);

    if(fd == -1)
    {
        printf("Unable to create the file\n");
    }
    else
    {
        printf("File Successfully created\n");
    }

    return 0;
}

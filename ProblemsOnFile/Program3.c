#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
//#include<io.h>  : Windows

int main(int argc, char const *argv[])
{
    int fd = 0;
    char Fname[30];

    printf("Enter the filename\n");
    scanf("%s",Fname);

    
    fd = open(Fname,O_RDWR); 

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File Successfully opened with FD : %d\n",fd);
    }

    return 0;
}

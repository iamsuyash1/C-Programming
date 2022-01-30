#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
//#include<io.h>  : Windows

int main(int argc, char const *argv[])
{
    int fd = 0;
    char Fname[30];

    printf("Enter the filename\n");
    scanf("%s",Fname);

    // read = 4, write = 2, exe = 1; 4+2+1 = 7
    fd = creat(Fname,0777); // 0:Octal, 7: owner, 7:Group, 7:Others

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

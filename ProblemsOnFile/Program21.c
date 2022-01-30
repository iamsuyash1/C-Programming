
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
//#include<io.h>  : Windows

int main(int argc, char const *argv[])
{
    int fd = 0;
    char Buffer[10];
    int iRet = 0;
    char fname[20];
    int i = 0, iCnt = 0;

    printf("Enter the file name\n");
    scanf("%s",fname);

    fd = open(fname,O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }   

    while ((iRet = read(fd,Buffer,10)) != 0)
    {
        for (i = 0; i < iRet; i++)
        {
            if ((Buffer[i] >= 'A') && (Buffer[i] <= 'Z') )
            {
                iCnt++;
            }
        }
    }

    printf("Total number of Capitals are : %d\n",iCnt);    

    close(fd);
    return 0;
}

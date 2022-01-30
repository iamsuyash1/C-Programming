#include<stdio.h>

/*
    Accept division of student from user and depends on the division 
    display exam timing. There are 4 divisions in school as A,B,C,D. Exam 
    of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. 

    (Application should be case insensitive)

    Input : C
    Output : Your exam at 9.20 AM
    
    Input : d
    Output : Your exam at 10.30 AM
*/

void DisplaySchedule(char ch)
{
    if (ch == 'A' || ch== 'a')
    {
        printf("Exam is at 7 Am\n");
    }

    else if (ch == 'B' || ch== 'b')
    {
        printf("Exam is at 8.30 Am\n");
    }

    else if (ch == 'C' || ch== 'c')
    {
        printf("Exam is at 9.20 Am\n");
    }

    else if (ch == 'D' || ch== 'd')
    {
        printf("Exam is at 10.30 Am\n");
    }
    else
    {
        printf("Inavalid Division\n");
        return;        
    }       
}
int main(int argc, char const *argv[])
{
    char cValue = '\0';

    printf("Enter your division\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    return 0;
}

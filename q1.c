//C program to print all alphabets from a to z
#include <stdio.h>
int main()
{
    char ch = 'a';

    printf("Alphabets from a - z are: \n");
    while(ch<='z')
    {
        printf("%c\n", ch);
        ch++;
    }
    return 0;
}

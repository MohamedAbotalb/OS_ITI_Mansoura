#include <stdio.h>
#include <stdlib.h>

/* Create a program to take a character from the user, and then display its ASCII code */

int main()
{
    char ch;

    printf("Enter the Character: ");
    scanf("%c", &ch);

    printf("ASCII code of %c is %d\n", ch, ch);

    return 0;
}

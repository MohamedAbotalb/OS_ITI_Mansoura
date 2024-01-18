#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Create a program to create simple menu with three choices ( new , display , exit ).*/

int main()
{
    int flag = 0;
    char ch;

    do {
        system("clear");
        printf(" new\n display\n exit\n");
        ch = getch();

        switch(ch) {
            case 'n':
            case 'N':
                printf(" New Selected\n");
                getch();
                break;

            case 'd':
            case 'D':
                printf(" Display Selected\n");
                getch();
                break;

            case 'e':
            case 'E':
                printf(" EXIT");
                flag = 1;
                break;

            case 27:
                flag = 1;
                break;
        }
    } while (flag != 1);

    return 0;
}

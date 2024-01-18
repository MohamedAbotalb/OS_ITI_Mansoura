#include <stdio.h>
#include <stdlib.h>

/* Create a program to get a keyboard button and check if it is extended key or normal key */

int main()
{
    char key;

    printf("Please enter a key from keyboard: ");
    //key = getch();
    scanf("%c", &key);

    if (key == -32) {
        //key = getch();
        scanf("%c", &key);
        printf("You pressed an extended key its value = %c\n", key);
    }
    else {
        printf("You pressed a normal key its value = %c\n", key);
    }
    return 0;

}

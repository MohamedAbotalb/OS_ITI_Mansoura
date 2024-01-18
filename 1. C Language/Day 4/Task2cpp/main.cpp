#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Create a program to get a keyboard button and check if it is extended key or normal key */
// extended key on windows stored in 2 bytes, on linux stored in 3 bytes
// ^[[A for up, ^[[B for down, ^[[C for right, ^[[D for left
// first byte stores ^[ which is \033, second byte stores [, third byte stores character A, B, C, D

int main()
{
    char key;

    printf("Please enter a key from keyboard: ");
    key = getch();

    if (key == '\033') { // '\033' refer to ^[
        key = getch();

        if (key == '[') {

            key = getch();
            printf("\nYou pressed an extended key its value = %c : %d\n", key, key);
        }
    }
    else {
        printf("\nYou pressed a normal key its value = %c : %d\n", key, key);
    }
    return 0;

}

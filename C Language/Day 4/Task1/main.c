#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Create a program to get the user first_name and last_name and print them on screen */

int main()
{
    char firstName[15] = "";
    char lastName[15] = "";
    char fullName[30] = "";

    printf("Please enter your first name: ");
    gets(firstName);

    printf("\nPlease enter your last name: ");
    gets(lastName);

    // concate the firstName with the fullName
    strcat(fullName, firstName);

    // concate a space with the fullName
    strcat(fullName, " ");

    // concate the lastName with the fullName
    strcat(fullName, lastName);

    printf("\nYour full name is %s\n", fullName);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("write key :");
    ch = getch();



    if (ch == -32)
        {ch = getch();
        printf("\nExtend and code %c and asci equal = %d",ch,ch);}
    else
        printf("\nNormal and code %c and asci equal = %d",ch,ch);



    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* Create a Magic Box */

void gotoxy(int x,int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}

int main()
{
    gotoxy(0, 5);
    printf("");

    int i = 1, size, rows, cols;
    do {
        printf("Please enter a positive odd value for the size (1 to 5): ");
        scanf("%d", &size);
    } while (size < 1 || size > 5 || size % 2 == 0);

    rows = 1;
    cols = (size / 2) + 1;

    gotoxy(cols + 10, rows + 10);
    printf("%d", i);

    for (i = 2; i <= size * size; i++) {
        if ((i - 1) % size == 0) rows++; // problem here i - 1 % size == 0 should be (i - 1) % size == 0
        else {
            cols--;
            rows--;

            if (rows == 0) rows = size;
            if (cols == 0) cols = size;
        }

        gotoxy(cols + 10, rows + 10);
        printf("%d", i);
    }

    return 0;
}

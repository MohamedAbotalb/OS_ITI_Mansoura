#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Create a highlighted menu */

void gotoxy(int x, int y);

int main()
{
    int i, cursior = 0, flag = 0;
    char ch;
    char name[3][10]= {"New","Display","Exit"};

    do{

        system("clear");

        for(i=0; i < 3; i++) {
            if (i==cursior)
                textcolor(0x07);

            gotoxy(20,10+i);
            printf("%s",name[i]);
            textcolor(0x01);
        }

        ch = getch();

        switch (ch){
            case '\033':
                ch = getch();

                if (ch == '[') {
                    switch (ch) {
                        case 72:
                            cursior--;
                            if (cursior < 0)
                                cursior = 2;
                            break;
                        case 80:
                            cursior++;
                            if (cursior > 2)
                                cursior = 0;
                            break;
                        case 79:
                            cursior = 2;
                            break;
                    }
                }

            case 13:
                system("clear");
                printf("%s", name[cursior]);
                if (cursior == 2)
                    flag = 1;
                getch();
                break;

            case 27:
                flag = 1;
                break;
        }
    }
    while(flag ==0);

    return 0;
}


void gotoxy(int x, int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}

#include <stdio.h>
#include <stdlib.h>

/* Create a highlighted menu */

void gotoxy(int x,int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}


int main()
{
    int cursior = 0;
    int i=0;
    int flag=0;
    char ch;
    char name[3][10] = {"New","Display","Exit"};

    do{

    system("clear");
    for(i=0;3>i;++i)
        {if (i==cursior)
            printf("0x27");

        gotoxy(20,10+i);
        printf("%s",name[i]);
        printf("0x01");}

    ch = getch();

    switch (ch){
    case -32:
        ch = getch();
        switch (ch) {
        case 72:
            cursior--;
            if (0 > cursior)
                cursior =2;
            break;
        case 80:
            cursior++;
            if (2 < cursior)
                cursior = 0;
            break;
        case 79:
            cursior =2;
            break;}
        break;

    case 13:
        system("clear");
        printf("%s",name[cursior]);
        if (cursior == 2)
            flag = 1;
        getch();
        break;

    case 27:
        flag=1;
        break;}
    }while(flag ==0);

    return 0;


}

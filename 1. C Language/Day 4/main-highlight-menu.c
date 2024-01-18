#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define null -32

 void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }


void textattr(int i)
{
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}


int main()
{
    int cursior = 0;
    int i=0;
    int flag=0;
    char ch;
    char name[3][10]= {"New","Display","Exit"};

    do{

    system("cls");
    for(i=0;3>i;++i)
        {if (i==cursior)
            textattr(0x27);

        gotoxy(20,10+i);
        printf("%s",name[i]);
        textattr(0x01);}

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
        system("cls");
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

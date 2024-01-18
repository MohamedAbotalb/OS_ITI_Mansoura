#include <iostream>
#include <conio.h>
#include "Point.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include "Picture.h"
#include <graphics.h>

using namespace std;

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    cleardevice();

    Point p1(100, 200), p2(200, 300), p3(300, 400), p4(400, 500), p5(500, 600), p6(600, 700);

    Rect r1(p1, p2), r2(p3, p4), r3(p5, p6);
    Circle c1(p1, 50), c2(p2, 50), c3(p3, 50);
    Triangle t1(p1, p2, p3), t2(p4, p5, p6), t3(80, 90, 100, 110, 120, 130);

    Rect rectangleArray[3] = {r1, r2, r3};
    Circle circleArray[3] = {c1, c2, c3};
    Triangle triangleArray[3] = {t1, t2, t3};

    Picture pic(rectangleArray, circleArray, triangleArray, 3, 3, 3);
    pic.paint();

    getch();
    closegraph();

    return 0;
}

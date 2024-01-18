#include <iostream>
#include "Picture.h"

using namespace std;

Picture::Picture()
{
    rPtr = NULL;
    cPtr = NULL;
    tPtr = NULL;
    rectangles = circles = triangles = 0;
}

Picture::Picture(Rectangle* _rPtr, int _rectangles) {
    rPtr = _rPtr;
    rectangles = _rectangles;
}

Picture::Picture(Circle* _cPtr, int _circles) {
    cPtr = _cPtr;
    circles = _circles;
}

Picture::Picture(Triangle* _tPtr, int _triangles) {
    tPtr = _tPtr;
    triangles = _triangles;
}

Picture::Picture(Rectangle* _rPtr, Circle* _cPtr, int _rectangles, int _circles) {
    rPtr = _rPtr;
    cPtr = _cPtr;
    rectangles = _rectangles;
    circles = _circles;
}

Picture::Picture(Rectangle* _rPtr, Circle* _cPtr, Triangle* _tPtr, int _rectangles, int _circles, int _triangles) {
    rPtr = _rPtr;
    cPtr = _cPtr;
    tPtr = _tPtr;
    rectangles = _rectangles;
    circles = _circles;
    triangles = _triangles;
}

void Picture::paint() {
    int i;
    // draw rectangles
    for (i = 0; i < rectangles; i++)
        rPtr[i].draw();

    // draws circles
    for (i = 0; i < circles; i++)
        cPtr[i].draw();

    // draws triangles
    for (i = 0; i < triangles; i++)
        rPtr[i].draw();
}

void Picture::print() {
    int i;
    // print rectangles
    for (i = 0; i < rectangles; i++)
        rPtr[i].print();

    // print circles
    for (i = 0; i < circles; i++)
        cPtr[i].print();

    // print triangles
    for (i = 0; i < triangles; i++)
        rPtr[i].print();
}

Picture::~Picture()
{
    delete rPtr;
    delete cPtr;
    delete tPtr;
}

#ifndef PICTURE_H
#define PICTURE_H
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"


class Picture
{
    public:
        Picture();
        Picture(Rect* _rPtr, int _rectangles);
        Picture(Circle* _cPtr, int _circles);
        Picture(Triangle* _tPtr, int _triangles);
        Picture(Rect* _rPtr, Circle* _cPtr, int _rectangles, int _circles);
        Picture(Rect* _rPtr, Circle* _cPtr, Triangle* _tPtr, int _rectangles, int _circles, int _triangles);

        void print();
        void paint();

        ~Picture();

    protected:

    private:
        Rect* rPtr;
        Circle* cPtr;
        Triangle* tPtr;
        int rectangles, circles, triangles;
};

#endif // PICTURE_H

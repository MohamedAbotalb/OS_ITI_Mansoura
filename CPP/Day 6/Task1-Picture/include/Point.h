#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point();
        Point(int _xy);
        Point(int _x, int _y);

        void setX(int _x);
        int getX();

        void setY(int _y);
        int getY();

        void setPoint(int _x, int _y);
        Point getPoint();

        void print();

    protected:

    private:
        int x, y;
};

#endif // POINT_H

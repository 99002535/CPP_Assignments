#ifndef __POINT_H
#define __POINT_H

enum Quadrant {
    Q1,
    Q2,
    Q3,
    Q4
};


template<typename T>
class Point {
    T m_x;
    T m_y;
  public:
    Point();
    Point(T,T);
    void distanceFromOrigin();
    Quadrant quadrant();
    void display();
};

#endif

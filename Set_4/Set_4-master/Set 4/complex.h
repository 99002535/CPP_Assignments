#ifndef __COMPLEX_H
#define __COMPLEX_H
using namespace std;
template<typename T>
class Complex {
    T m_real;
    T m_image;
  public:
    Complex();
    Complex(T,T);
    void display() ;

};

#endif


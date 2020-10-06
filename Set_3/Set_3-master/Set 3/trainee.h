#include<iostream>
#include "string.h"
#ifndef __TRAINEE_H
#define __TRAINEE_H

#include "employee.h"
using namespace std;
class Trainee : public Employee {
    string m_track;
    double score;
  public:
    Trainee(string,string, double,string,double );
    void payroll();
    void appraisal();
    void display();
};

#endif

#include<iostream>
#include "string.h"
#ifndef __ENGINEER_H
#define __ENGINEER_H

#include "employee.h"
using namespace std;
class Engineer : public Employee {
    int m_projCode;
  public:
    Engineer(string id, string name, double salary,int exp,int code);
    void payroll();
    void appraisal();
    void display();
};

#endif

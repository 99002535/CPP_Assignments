#include<iostream>
#include "string.h"
#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H
using namespace std;
class IEmployee {
  public:
    virtual void payroll(int,int,int,int);
    virtual void appraisal(int);
};

class Employee:public IEmployee {
    string m_empid;
    string m_name;
    double m_salary;
    int m_exp;
  public:
    Employee(string id, string name, double salary,int exp);
    virtual void display();
};

#endif

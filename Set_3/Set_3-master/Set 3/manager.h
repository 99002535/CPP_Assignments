#include<iostream>

#include "string.h"
#ifndef __MANAGER_H
#define __MANAGER_H

#include "employee.h"
using namespace std;
class Manager : public Employee {
    int m_projCode;
    int m_reportees;
  public:
    Manager(string id, string name, double salary,int exp,int code,int reprtees);
    void payroll();
    void appraisal();
    void display();
};

#endif

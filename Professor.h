//
// Created by johne on 16/8/2020.
//

#ifndef LAB03_OPP_PROFESSOR_H
#define LAB03_OPP_PROFESSOR_H
#include "Person.h"

class Professor: public Person{
public:
    Professor();
    Professor(double, double);
    Professor(string,string,int,int,double, double);
    virtual ~Professor();
    double getmonthlySalary();
    double getcommissionRate();
    void setmonthlySalary(double);
    void setcommissionRate(double);
    double salary();
    string toString();

private:
    double monthlySalary;
    double commissionRate;

};


#endif //LAB_OPP_PROFESSOR_H

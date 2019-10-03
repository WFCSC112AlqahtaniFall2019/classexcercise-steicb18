//
// Created by stein on 10/3/2019.
//

#ifndef CLASSEXCERCISE_FACULTY_H
#define CLASSEXCERCISE_FACULTY_H

#include <string>
#endif //CLASSEXCERCISE_FACULTY_H
using namespace std;

class Faculty{
public:
    Faculty(int s,int n,int i,int a, int db, int d);
    string name;
    string id;
    string address;
    string DoB;
    string degree;
//getter and setter for salary
    double getSalary() {return salary;}
    void setSalary(double salary);
/* 1) create a getter and setter for each variable in the class*/
    string getName(){return name;}
    void setName(double name);

    string getId(){return id;}
    void setId(double id);

    string getAddress(){return address;}
    void setAddress(double address);

    string getDoB(){return DoB;}
    void setDoB(double DoB);

    string getDegree(){return degree;}
    void setDegree(double degree);

private:
    double salary;
    double SSN;
};

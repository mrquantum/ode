#include <fstream>
#include <iostream>


#ifndef CLASSES_H
#define CLASSES_H


class deqn{

public:
    int order=2;
    int n; //numbersteps

    double *t;
    double *y;
    double **Y;
    double dt=0.01;
    double y0;
    double (*fun)(double,double); //rhs f(t,y)
//     void (*fun2)(double, double *y);
    
    
    
    void ex_euler();
    void ex_euler2();
    void writefile();
    deqn(int n,double (*func)(double t ,double y));
    ~deqn();
    
};






#endif
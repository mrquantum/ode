#include <iostream>
#include <math.h>
#include <vector>
#include <fstream>
#include "classes.h"


using namespace std;


double dydt(double t,double y){
  return y;
}


double dy2dt(double t,double y){
    return t*t;
}

//this one accepts an array
void dydt3(double t, double *y){
    y[0]=y[1];
    y[1]=t;
}


int main(int argc, char **argv) {

  deqn dy(1000,&dy2dt);

  dy.y0=.0; 
  dy.ex_euler();
  dy.writefile();


  
}
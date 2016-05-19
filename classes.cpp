#include <iostream>
#include <math.h>
#include <vector>
#include <fstream>
#include "classes.h"

using namespace std;

void deqn::ex_euler(){
    t[0]=0.0;
    y[0]=y0;
    
    for(int i=1;i<n;i++){
      t[i]=t[i-1]+dt; //Time update
      
        y[i]=y[i-1]+dt*fun(t[i],y[i-1]); //Y update
      
    }
}


void deqn::ex_euler2(){
    t[0]=0.0;
    
}



void deqn::writefile()
{
    ofstream txtfile("dydt.txt");
    for(int i=0;i<n;++i){
        txtfile<<t[i]<<"\t"<<y[i]<<endl;
    }
}

deqn::deqn(int N,double (*func)(double t, double y))
//This is a constructor
{ 
    n=N;
    t=new double[n];
    y=new double[n];
//     Y=new double[order] double[n];
    fun=func;
    
    
    
}

deqn::~deqn(){
    delete [] t;
    delete [] y;
}
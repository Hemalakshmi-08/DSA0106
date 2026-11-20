#include <iostream>
#include <iomanip>
double cuboid(double l,double w,double h){return l*w*h;}double cylinder(double r,double h){return 3.141592653589793*r*r*h;}int main(){std::cout<<std::fixed<<std::setprecision(2)<<cuboid(2,3,4)<<"\n"<<cylinder(3,7)<<"\n";}
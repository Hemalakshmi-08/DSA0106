#include <iostream>
struct Bill{virtual ~Bill()=default;virtual double total()const=0;};struct OutPatient:Bill{double consultation,tests;OutPatient(double c,double t):consultation(c),tests(t){}double total()const override{return consultation+tests;}};struct InPatient:Bill{int days;double rate,surgery;InPatient(int d,double r,double s):days(d),rate(r),surgery(s){}double total()const override{return days*rate+surgery;}};
int main(){OutPatient o(500,1200);InPatient i(3,2500,40000);std::cout<<o.total()<<" "<<i.total()<<"\n";}

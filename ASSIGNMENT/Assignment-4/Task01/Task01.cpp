#include <iostream>
class Staff{protected:std::string name;double basic;public:Staff(std::string n,double b):name(std::move(n)),basic(b){}virtual double pay()const=0;virtual ~Staff()=default;};class Professor:public Staff{double research;public:Professor(std::string n,double b,double r):Staff(n,b),research(r){}double pay()const override{return basic*1.42+research;}};
int main(){Professor p("Anu",50000,10000);std::cout<<p.pay()<<"\n";}

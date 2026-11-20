#include <iostream>
class Vehicle{protected:double rate;public:explicit Vehicle(double r):rate(r){}virtual double charge(int days)const=0;virtual ~Vehicle()=default;};class Bike:public Vehicle{public:Bike(double r):Vehicle(r){}double charge(int d)const override{return rate*d;}};class ElectricCar:public Vehicle{double kwh;public:ElectricCar(double r,double k):Vehicle(r),kwh(k){}double charge(int d)const override{return rate*d+kwh*8;}};
int main(){Bike b(200),e(0);ElectricCar c(500,20);std::cout<<b.charge(2)<<" "<<c.charge(2)<<"\n";}

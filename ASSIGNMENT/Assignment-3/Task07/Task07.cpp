#include <iostream>
class Complex{double r,i;public:Complex(double a=0,double b=0):r(a),i(b){}Complex operator+(const Complex&b)const{return{r+b.r,i+b.i};}void print()const{std::cout<<r<<(i<0?"":"+")<<i<<"i\n";}};
int main(){Complex a(2,3),b(4,-1);(a+b).print();}

#include <iostream>
class Box{int value;public:explicit Box(int v):value(v){}Box operator+(const Box&b)const{return Box(value+b.value);}int get()const{return value;}};
int main(){Box a(2),b(3);std::cout<<"sum="<<(a+b).get()<<" (operator+ preserves operand meaning)\n";}

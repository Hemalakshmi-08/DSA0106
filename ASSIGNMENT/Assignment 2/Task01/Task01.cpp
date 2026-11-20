#include <iostream>
void byValue(int x){x+=5;} void byRef(int& x){x+=5;} void byPtr(int* x){if(x)*x+=5;}
int main(){int a=10,b=10,c=10;byValue(a);byRef(b);byPtr(&c);std::cout<<a<<" "<<b<<" "<<c<<"\n";}

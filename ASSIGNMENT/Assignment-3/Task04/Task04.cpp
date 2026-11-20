#include <iostream>
#include <sstream>
class Money{int cents;public:explicit Money(int c):cents(c){}Money operator+(Money b)const{return Money(cents+b.cents);}friend std::ostream&operator<<(std::ostream&o,Money m){return o<<m.cents<<" cents";}};
int main(){Money x(250),y(125);std::cout<<x+y<<"\n";}

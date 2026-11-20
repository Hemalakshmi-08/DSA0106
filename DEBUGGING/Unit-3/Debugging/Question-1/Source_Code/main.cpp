#include <iostream>
#include <cstring>
class Text{char*p;public:Text(const char*s):p(new char[strlen(s)+1]){strcpy(p,s);}Text(const Text&o):p(new char[strlen(o.p)+1]){strcpy(p,o.p);}~Text(){delete[]p;}void show()const{std::cout<<p<<"\n";}};int main(){Text a("OOP C++"),b=a;b.show();}
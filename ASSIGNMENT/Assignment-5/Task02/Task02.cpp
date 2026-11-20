#include <iostream>
struct Base{virtual ~Base()=default;virtual const char*name()const{return "Base";}};struct Derived:Base{const char*name()const override{return "Derived";}};
int main(){Base*p=new Derived;std::cout<<p->name()<<" via base pointer (runtime dispatch)\n";delete p;}

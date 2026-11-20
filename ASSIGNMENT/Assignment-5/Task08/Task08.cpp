#include <chrono>
#include <iostream>
#include <variant>
struct OP{double total()const{return 1700;}};struct IP{double total()const{return 47500;}};
int main(){std::variant<OP,IP> bills[]{OP{},IP{}};double sum=0;for(auto&b:bills)sum+=std::visit([](auto&x){return x.total();},b);std::cout<<"variant total="<<sum<<"\n";}

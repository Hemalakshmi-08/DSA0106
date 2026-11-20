#include <iostream>
#include <array>
int main(){constexpr std::array<int,4> fares{1000,2000,3000,6000}; std::cout<<"Four-zone table entries: "<<fares.size()<<"; airport fare paise="<<fares[3]<<"\n";}

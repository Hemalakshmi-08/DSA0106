#include <iostream>
#include <string>
struct SmartCard { long long balancePaise; };
struct Journey { int zone; bool peak; };
int main(){ SmartCard card{10000}; Journey trip{3,true}; std::cout << "Card balance (paise): " << card.balancePaise << "\n" << "Journey zone: " << trip.zone << ", peak: " << std::boolalpha << trip.peak << "\n"; }

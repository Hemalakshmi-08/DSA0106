#include <iostream>
#include <string>
constexpr int INNER_FARE=1000, MIDDLE_FARE=2000, OUTER_FARE=3000;
enum class Zone { Inner, Middle, Outer };
int main(){ Zone z=Zone::Outer; std::cout << "Outer fare in paise: " << OUTER_FARE << "\n" << "Zone enum class prevents implicit integer conversion.\n"; }

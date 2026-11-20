#include <iostream>
int main(){ int a=7,b=2; double integerDivision=a/b; double realDivision=static_cast<double>(a)/b; std::cout << integerDivision << " " << realDivision << "\n"; }

#include <iostream>
int main(){ int hour=19; bool peak=(hour>=8 && hour<10)||(hour>=17 && hour<20); int base=3000; int fare=peak ? base+base*20/100 : base; std::cout << "peak=" << peak << " fare(paise)=" << fare << "\n"; }

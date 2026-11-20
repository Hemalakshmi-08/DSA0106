#include <iostream>
enum class Zone{Inner,Middle,Outer};
int fare(Zone z){switch(z){case Zone::Inner:return 1000;case Zone::Middle:return 2000;case Zone::Outer:return 3000;} return 0;}
int main(){for(Zone z:{Zone::Inner,Zone::Middle,Zone::Outer}) std::cout<<fare(z)<<" "; std::cout<<"\n";}

#include <iostream>
#include <stdexcept>
void check(double x){if(x<0)throw std::invalid_argument("negative");if(x>1e6)throw std::out_of_range("too large");std::cout<<"valid ";}
int main(){for(double v:{100.0,-5.0,2000000.0})try{check(v);}catch(const std::exception&e){std::cout<<"caught:"<<e.what()<<" ";}std::cout<<"\n";}

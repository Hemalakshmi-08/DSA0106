#include <iostream>
#include <stdexcept>
class BillingError:public std::runtime_error{public:using runtime_error::runtime_error;};double validate(double billed,double cover){if(billed<0||cover<0)throw std::invalid_argument("negative amount");if(billed>cover)throw BillingError("exceeds cover");return billed;}
int main(){for(auto pair:{std::pair{40000.0,50000.0},std::pair{60000.0,50000.0}}){try{std::cout<<validate(pair.first,pair.second)<<" approved\n";}catch(const std::exception&e){std::cout<<"rejected: "<<e.what()<<"\n";}}}

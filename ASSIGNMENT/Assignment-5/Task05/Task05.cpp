#include <iostream>
#include <stdexcept>
void inner(){throw std::runtime_error("invalid claim");}void process(){try{inner();}catch(const std::exception&e){std::cout<<"audit: "<<e.what()<<"\n";throw;}}
int main(){try{process();}catch(const std::exception&e){std::cout<<"handled: "<<e.what()<<"\n";}}

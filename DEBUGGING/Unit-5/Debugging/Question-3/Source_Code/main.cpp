#include <iostream>
#include <exception>
struct DBErr:std::exception{const char*what()const noexcept override{return "DB timeout";}};struct Timeout:DBErr{int ms=5000;};void audit(){try{throw Timeout{};}catch(const DBErr&){std::cout<<"Audit logged\n";throw;}}int main(){try{audit();}catch(const Timeout&e){std::cout<<"Timeout caught: "<<e.ms<<" ms\n";}catch(const DBErr&e){std::cout<<e.what()<<"\n";}}
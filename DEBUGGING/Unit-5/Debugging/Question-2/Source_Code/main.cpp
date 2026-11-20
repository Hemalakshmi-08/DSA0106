#include <iostream>
#include <string>
struct BaseErr{std::string msg;BaseErr(std::string m):msg(m){}};struct FundsErr:BaseErr{double gap;FundsErr(std::string m,double g):BaseErr(m),gap(g){}};int main(){try{throw FundsErr("Overdraw",250);}catch(const FundsErr&e){std::cout<<"Shortfall: $"<<e.gap<<"\n";}catch(const BaseErr&e){std::cout<<e.msg<<"\n";}catch(...){std::cout<<"Unknown\n";}}
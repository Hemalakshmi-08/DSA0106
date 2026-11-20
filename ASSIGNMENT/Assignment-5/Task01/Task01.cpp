#include <iostream>
struct Bill{virtual double total()const=0;virtual const char*type()const=0;virtual ~Bill()=default;};struct OP:Bill{double total()const override{return 1700;}const char*type()const override{return "OP";}};struct IP:Bill{double total()const override{return 47500;}const char*type()const override{return "IP";}};
int main(){Bill*bs[]{new OP,new IP};double sum=0;for(auto b:bs){std::cout<<b->type()<<"="<<b->total()<<"\n";sum+=b->total();}std::cout<<"sum="<<sum<<"\n";for(auto b:bs)delete b;}

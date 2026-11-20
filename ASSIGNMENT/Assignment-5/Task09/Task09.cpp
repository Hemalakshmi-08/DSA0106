#include <iostream>
struct Bill{virtual double total()const=0;virtual ~Bill()=default;};struct OP:Bill{double total()const override{return 1700;}};struct Emergency:Bill{double total()const override{return 12000;}};
int main(){Bill* list[]{new OP,new Emergency};double total=0;for(auto b:list)total+=b->total();std::cout<<"extended bill total="<<total<<"\n";for(auto b:list)delete b;}

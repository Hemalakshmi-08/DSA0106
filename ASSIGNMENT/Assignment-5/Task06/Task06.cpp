#include <iostream>
#include <memory>
struct Bill{virtual double total()const=0;virtual ~Bill()=default;};struct OP:Bill{double total()const override{return 1700;}};struct IP:Bill{double total()const override{return 47500;}};
int main(){std::unique_ptr<Bill> a=std::make_unique<OP>();std::unique_ptr<Bill>b=std::make_unique<IP>();std::cout<<a->total()+b->total()<<"\n";}

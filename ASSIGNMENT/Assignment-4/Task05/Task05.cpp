#include <iostream>
#include <string>
class Cart{double total=0,discount=0;public:Cart&add(std::string,double p){total+=p;return *this;}Cart&setDiscount(double d){discount=d;return *this;}double amount()const{return total*(100-discount)/100;}};
int main(){Cart c;c.add("Rice",60).add("Dal",120).setDiscount(10);std::cout<<c.amount()<<"\n";}

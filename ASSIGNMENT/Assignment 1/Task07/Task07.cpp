#include <iostream>
class Card{long long balance; public: explicit Card(long long b):balance(b){} bool canTravel(long long f)const{return balance-f>=5000;} bool deduct(long long f){if(!canTravel(f))return false;balance-=f;return true;} long long get()const{return balance;}};
int main(){Card c(10000); std::cout<<std::boolalpha<<c.deduct(3000)<<" remaining="<<c.get()<<"\n";}

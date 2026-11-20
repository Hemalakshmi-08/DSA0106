#include <iostream>
struct Account{virtual double rate()const{return 3.5;}virtual ~Account()=default;};struct Senior:Account{double rate()const override{return 4.0;}};
int main(){Senior s;Account*p=&s;Account sliced=s;std::cout<<p->rate()<<" "<<sliced.rate()<<"\n";}

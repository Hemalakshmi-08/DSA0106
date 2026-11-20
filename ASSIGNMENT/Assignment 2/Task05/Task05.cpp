#include <iostream>
class Ticket{static int issued;int seat;public:Ticket():seat(issued<3?++issued:0){}int getSeat()const{return seat;}static int count(){return issued;}};int Ticket::issued=0;
int main(){Ticket t[4];for(auto&x:t)std::cout<<(x.getSeat()?x.getSeat():0)<<" ";std::cout<<"issued="<<Ticket::count()<<"\n";}

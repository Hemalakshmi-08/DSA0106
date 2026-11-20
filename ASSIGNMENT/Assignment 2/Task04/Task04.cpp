#include <iostream>
class SavingsAccount{double balance=0;double tx[10]{};int count=0;public:void deposit(double x){balance+=x;if(count<10)tx[count++]=x;else{for(int i=1;i<10;++i)tx[i-1]=tx[i];tx[9]=x;}} double getBalance()const{return balance;} int transactions()const{return count;}};
int main(){SavingsAccount a;a.deposit(100);a.deposit(50);std::cout<<"balance="<<a.getBalance()<<" recent="<<a.transactions()<<"\n";}

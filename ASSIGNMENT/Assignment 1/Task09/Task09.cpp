#include <iostream>
long long fare(int zone,bool peak){long long base=zone==1?1000:zone==2?2000:3000; return base+(peak?base*20/100:0);}
int main(){long long balance=10000; for(auto [z,p]:{std::pair<int,bool>{1,false},std::pair<int,bool>{3,true},std::pair<int,bool>{2,false}}){auto f=fare(z,p); if(balance-f>=5000){balance-=f;std::cout<<"Approved ";}else std::cout<<"Denied ";std::cout<<"fare="<<f<<" balance="<<balance<<"\n";}}

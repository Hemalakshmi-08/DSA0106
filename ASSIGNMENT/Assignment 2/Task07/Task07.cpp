#include <iostream>
#include <vector>
int main(){std::vector<int> fees{45000,30000,60000};for(auto&f:fees)f-=f*10/100;std::cout<<"After 10% concession: ";for(int f:fees)std::cout<<f<<" ";std::cout<<"\n";}

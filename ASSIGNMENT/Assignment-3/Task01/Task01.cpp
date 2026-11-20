#include <iostream>
class Item{int id;public:explicit Item(int n):id(n){std::cout<<"constructed "<<id<<"\n";}};
int main(){Item a(1);Item b{2};}

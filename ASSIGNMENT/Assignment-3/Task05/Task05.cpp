#include <iostream>
class Counter{int n;public:Counter(int v):n(v){}Counter&operator++(){++n;return *this;}bool operator<(const Counter&b)const{return n<b.n;}int operator[](int i)const{return n+i;}};
int main(){Counter a(4),b(9);++a;std::cout<<(a<b)<<" "<<a[2]<<"\n";}

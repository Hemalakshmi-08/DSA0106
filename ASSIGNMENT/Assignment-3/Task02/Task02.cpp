#include <iostream>
#include <algorithm>
class Buffer{int* p;int n;public:Buffer(int s):p(new int[s]{}),n(s){}Buffer(const Buffer&o):p(new int[o.n]),n(o.n){std::copy(o.p,o.p+n,p);}~Buffer(){delete[]p;}int size()const{return n;}};
int main(){Buffer a(4),b=a;std::cout<<"deep copies size="<<b.size()<<"\n";}

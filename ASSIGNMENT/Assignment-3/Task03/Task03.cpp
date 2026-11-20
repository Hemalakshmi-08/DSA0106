#include <iostream>
class DynamicArray{int* p;int n;public:DynamicArray(int s):p(new int[s]),n(s){std::cout<<"allocated "<<n<<"\n";}~DynamicArray(){delete[]p;std::cout<<"released\n";}};
int main(){{DynamicArray a(5);}std::cout<<"scope ended\n";}

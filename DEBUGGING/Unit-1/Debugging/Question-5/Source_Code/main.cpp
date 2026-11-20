#include <iostream>
int main(){int* p=new int[5];int sum=0;for(int i=0;i<5;i++)p[i]=(i+1)*10;for(int i=0;i<5;i++)sum+=p[i];std::cout<<"Total: "<<sum<<"\n";delete[]p;}
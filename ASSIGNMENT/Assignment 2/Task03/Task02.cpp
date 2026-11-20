#include <iostream>
int& highest(int a[],int n){int best=0;for(int i=1;i<n;++i)if(a[i]>a[best])best=i;return a[best];}
int main(){int marks[]{72,91,86};highest(marks,3)+=2;std::cout<<marks[1]<<"\n";}

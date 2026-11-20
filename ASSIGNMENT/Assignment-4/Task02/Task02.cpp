#include <iostream>
struct Person{Person(){std::cout<<"Person\n";}};struct Student:virtual Person{Student(){std::cout<<"Student\n";}};struct Staff:virtual Person{Staff(){std::cout<<"Staff\n";}};struct TA:Student,Staff{TA(){std::cout<<"TA\n";}};
int main(){TA t;}

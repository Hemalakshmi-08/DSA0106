#include <iostream>
#include <string>
class Person{protected:std::string name;public:Person(std::string n):name(n){std::cout<<"Person ";}virtual ~Person(){std::cout<<"~Person\n";}};class Address{std::string city;public:Address(std::string c):city(c){std::cout<<"Address ";}};class Student:public Person{Address home;public:Student(std::string n,std::string c):Person(n),home(c){std::cout<<"Student\n";}};
int main(){Student s("Kavya","Salem");}

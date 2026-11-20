#include <iostream>
#include <string>
struct Device{std::string mac;Device(std::string m):mac(m){std::cout<<"Device: "<<mac<<"\n";}};struct Sensor:Device{int rate;Sensor(std::string m,int r):Device(m),rate(r){std::cout<<"Rate: "<<rate<<" Hz\n";}};int main(){Sensor s("AA:BB:CC:DD:EE:FF",50);}
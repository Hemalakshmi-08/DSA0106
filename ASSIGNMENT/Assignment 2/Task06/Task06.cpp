#include <iostream>
class Time{int h,m;public:Time(int hh,int mm):h(hh),m(mm){}friend int minutesBetween(const Time&a,const Time&b){int x=a.h*60+a.m,y=b.h*60+b.m;return x>y?x-y:y-x;}friend bool earlier(const Time&a,const Time&b){return a.h*60+a.m<b.h*60+b.m;}};
int main(){Time a(9,45),b(13,10);std::cout<<minutesBetween(a,b)<<" "<<earlier(b,a)<<"\n";}

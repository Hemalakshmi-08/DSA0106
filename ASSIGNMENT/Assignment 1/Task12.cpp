#include <iostream>
int main(){int fare=3000; bool weekend=true, peak=true; int applied=weekend?fare*90/100:(peak?fare*120/100:fare); std::cout<<"Weekend discount (not combined with peak): "<<applied<<" paise\n"<<"Monthly pass: unlimited journeys within selected zones.\n";}

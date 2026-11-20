#include <climits>
#include <iostream>
int main(){ long long farePaise=3000; int journeys=3000000; long long total=farePaise*journeys; std::cout << "sizeof(int): " << sizeof(int) << " bytes\n" << "sizeof(long long): " << sizeof(long long) << " bytes\n" << "3,000,000 outer fares (paise): " << total << "\n"; }

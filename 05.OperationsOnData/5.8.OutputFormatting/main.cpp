#include <iostream>
#include <iomanip>
#include <bitset>

int main(){
    // std::flush
    std::cout << "This message have to flush." << std::endl << std::flush;

    // formatted table
    std::cout << std::setfill('-');
    std::cout << std::left << std::setw(20) << "--Name" << std::setw(10) << "--Age" << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::right << std::setw(20) << "Yoo Sejung" << std::setw(10) << 48 << std::endl;

    // change base
    int a{123};
    std::cout << std::showbase;
    std::cout << std::uppercase;
    std::cout << std::dec << "base 10 is " << a << std::endl;
    std::cout << std::oct << "base 8 is " << a << std::endl;
    std::cout << std::hex << "base 16 is " << a << std::endl;
    std::cout << std::bitset<8>{42} << std::endl;

    std::cout << std::noshowbase;
    std::cout << std::nouppercase;
    std::cout << std::oct << "base 8 is " << a << std::endl;
    std::cout << std::hex << "base 16 is " << a << std::endl;

    // precision for double
    double d{1.2345678};
    std::cout << std::setprecision(13);
    std::cout << "set precision 13 is " << d << std::endl;
    std::cout << std::fixed  << "set fixed 13 is " << d << std::endl;
    std::cout << std::scientific << "set scientific is " << d << std::endl;
    std::cout.unsetf(std::ios::fixed | std::ios::scientific);
    std::cout << std::showpoint << "showpoint is " << d << std::endl;

    // showpoint
    int e{10};
    std::cout << std::dec << std::showpos << e << std::endl;

    return 0;
}
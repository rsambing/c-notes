#include <iostream>
#include <cmath>

int main(void)
{
    //cmath
    //abs(a), sqrt(a), pow(a, b), round(a), 
    double a = 10.9;
    double b = 3.4;
    int c;

    // c = std::max(a, b);
    c = std::min(a, b);
    std::cout << c << '\n';
    return (0);
}
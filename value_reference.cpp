#include <iostream>

void swap(std::string &a, std::string &b)
{
    std::string temp;

    std::cout << "meu swap" << '\n';
    temp = a;
    a = b;
    b = temp;
}

int main(void)
{
    std::string a = "reinaldo";
    std::string b = "angela";

    std::cout << "a = " << a << '\n'; 
    std::cout << "b = " << b << '\n';
    std::cout << "------------" << '\n';
    swap(a, b);
    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n'; 
    return (0);
}
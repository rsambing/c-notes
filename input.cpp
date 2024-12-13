#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main(void)
{
    std::string str;
    std::cout << "write something\n";
    // std::cin >> str;
    std::getline(std::cin, str);
    std::cout << str << '\n';
    return (0);
}
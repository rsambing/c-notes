#include <iostream>

int main(void)
{
    std::string str;

    while(str.empty())
        std::getline(std::cin, str);
    int len = str.length();
    std::cout << len << '\n';

    //name.clear();
    str.append("@gmail.com");
    std::cout << str << '\n';
    std::cout << str.at(0) << '\n';
    str.insert(0, "@");
    std::cout << str << '\n';
    std::cout << str.find('r') << '\n';
    str.erase(0, 1);
    std::cout << str << '\n';
    return (0);
}

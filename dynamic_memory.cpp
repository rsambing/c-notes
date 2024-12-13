#include <iostream>

int main(void)
{
    int *num = nullptr;
    char    *str = nullptr;
    
    str = new char[3];
    num = new int;
    *num = 22;
    *str='r';
    std::cout << "num = " << *num << std::endl;
    std::cout << "str = " << str[0] << std::endl;
    delete(num);
    delete[] str;
    return (0);
}

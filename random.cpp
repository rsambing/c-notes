#include <iostream>
#include <ctime>

int main(void)
{
    srand(time(NULL));

    int num = (rand() % 20) + 1;
    std::cout << num << '\n';

    return (0);
}
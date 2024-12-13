#include <iostream>
#include <vector> 
#include <algorithm>

int main(void)
{
    std::string str[] = {"reinaldo", "sambinga"};
    for (std::string element : str)
        std::cout << element << ' ';
    std::cout << '\n';

    int array[] = {1, 2, 3, 4, 5, 6};
    // int len = sizeof(array)/sizeof(array[0]);
    for(int element : array)
        std::cout << element << ' ';
    std::cout << '\n';
    
    std::vector<int> vet = {4, 3, 40, -2, 9, -19};
    std::partial_sort(vet.begin(), vet.begin() + 2, vet.end());
    for(int element : vet)
        std::cout << element << ' ';
    std::cout << '\n';

    std::sort(vet.begin(), vet.end());
    for(int element : vet)
        std::cout << element << ' ';
    std::cout << '\n';
    return (0);
}

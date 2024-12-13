#include <iostream>

int main(void)
{
    std::string cars[][3] = {{"Mustang", "Camaro", "Challenger"},
                            {"Ferrari", "Lamborghini", "Porsche"},
                            {"F150", "Silverado", "Ram"}};

    int rows = sizeof(cars) / sizeof(cars[0]);
    int cols = sizeof(cars[0]) / sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0 ; j < cols; j++)
            std::cout << cars[i][j] << ' ';
        std::cout << std::endl;
    }
    return (0);
}
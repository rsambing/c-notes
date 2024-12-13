#include <iostream>

class Human
{
    public:
        std::string human = "reinaldo";
        std::string occupation = "student";
        int age = 15;

        void    eat()
        {
            std::cout << "eating" << '\n'; 
        }

        void    sleep()
        {
            std::cout << "sleeping" << '\n';
        }
};

int main(void)
{
    Human human1;

    human1.eat();
    return (0);
}
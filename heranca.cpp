#include <iostream>

class Animal
{
    public:
        bool alive = true;

        void    eat()
        {
            std::cout << "This animal is eating" << '\n';
        }
};

class Dog : public Animal
{
    public:
        void    bark()
        {
            std::cout << "The dog goes woof!" << '\n';
        }
};

int main(void)
{
    Dog dog;

    if (dog.alive)
    {
        dog.eat();
        dog.bark();
    }
    return (0);
}

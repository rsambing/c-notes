#include "iostream"

class Stove
{
    private:
        int temperature = 0;
    
    public: 
        int get_temperature ()
        {
            return (temperature);
        }

        void    set_temperature(int temperature)
        {
            this->temperature = temperature;
        }
};

int main(void)
{
    Stove   stove;

    stove.set_temperature(250);
    std::cout << "A temperatura atual : " << stove.get_temperature() << '\n';
    return (0);
}
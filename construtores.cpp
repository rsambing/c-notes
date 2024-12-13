#include <iostream>

class Student
{
    public:
        std::string name;
        int id;
    
    Student(std::string name, int id)
    {
        this->name = name;
        this->id = id;
    }
};

int main(void)
{
    Student student("angela", 20);

    std::cout <<"name : " << student.name << '\n';
    std::cout <<"id : " << student.id << '\n';
    return (0);
}
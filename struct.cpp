#include <iostream>

typedef struct s_casal
{
    std::string male;
    std::string femme;
    bool felizes;
}   t_casal;

void    print(t_casal casal)
{
    casal.male = "tio matias";
    casal.femme = "tia salome";
    casal.felizes = 1;

    if (casal.felizes)
        std::cout << casal.male << " ama a " << casal.femme << '\n';
    else
        std::cout << casal.male << " suporta a " << casal.femme << '\n';
}

int main(void)
{
    t_casal casal;
    print(casal);
    return (0);
}
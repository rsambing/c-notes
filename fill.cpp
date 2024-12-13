#include <iostream>

int	main(void)
{
	// fill() = Fills a range of elements with a specified a value
    // fill (begin, end, value)

    const int size = 10;
    std::string foods[size];

    fill(foods, foods + (size/2), "Pizza");
    fill(foods + (size/2), foods + size, "Hambuger");

    for (std::string food : foods)
        std::cout << food << '\n';
    return (0);
}

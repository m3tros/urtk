#include <iostream>

int main()
{
    srand(time(NULL));

    int array[15];
    int idex_minimum;

    for (int i = 0; i < 15; ++i)
    {
        array[i] = 10 + rand() % 81;
        std::cout << array[i] << " ";
    }

    int minimum = array[0];

    for (int i = 0; i < 15; ++i)
    {
        if (array[i] < minimum)
        {
            idex_minimum = i;
            minimum = array[i];
        }
    }

    std::cout << std::endl << minimum << std::endl;

    array[idex_minimum] = array[0];
    array[0] = minimum;

    for (int i = 0; i < 15; ++i)
    {
        std::cout << array[i] << " ";
    }
}

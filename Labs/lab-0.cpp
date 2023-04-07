#include <iostream>

int main()
{
    srand(time(NULL));

    int array[15];
    int x = 0;
    int n = 0;

    for (int i = 0; i < 15; ++i)
    {
        array[i] = -10 + rand() % 31;
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;

    for (int i = 0; i < 15; ++i)
    {
        if (array[i] > 0)
        {
            std::cout << array[i] << " ";
            x += array[i];
            ++n;
        }
    }

    std::cout << std::endl << x / n;

}

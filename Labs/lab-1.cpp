#include <iostream>

int main()
{
    srand(time(NULL));
    
    int array[10];
    
    for (int i = 0; i < 10; ++i)
    {
        array[i] = 10 + rand() % 41;
        std::cout << array[i] << " ";
    }
    
    int max = array[0];
    
    for (int i = 0; i < 10; ++i)
    {
        if (array[i] % 2 == 0 & array[i] > max)
        {
	        max = array[i];
        }
    }
    
    std::cout << std::endl << max;
}

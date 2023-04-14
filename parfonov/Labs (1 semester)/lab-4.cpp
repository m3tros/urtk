#include <iostream>

int main()
{
    srand(time(NULL));

    int left_part; 
    int right_part; 
    
    int result_left_part = 0;
    int result_right_part = 0;
    
    std::cin >> left_part;
    right_part = left_part * 2;
    
    int array[right_part];
    
    for (int i = 0; i < right_part; ++i)
    {
        array[i] = rand() % 14;
        std::cout << array[i] << " ";
    }

    for (int i = 0; i < left_part; ++i)
    {
        result_left_part += array[i];
    }
    
    for (int i = left_part; i < right_part; ++i)
    {
        result_right_part += array[i];
    }
    
    std::cout << std::endl << result_left_part << std::endl << result_right_part << std::endl << result_left_part - result_right_part;
}
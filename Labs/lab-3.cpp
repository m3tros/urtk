#include <iostream>

int main() {
    
    srand(time(NULL));
    
    int array[20];
    int n;
    int k;
    
    for (int i = 0; i < 20; ++i)
    {
        array[i] = 10 + rand() % 31;
        std::cout << array[i] << " ";
    }

    int min = array[0];
    
    std::cout << std::endl;
    std::cin >> n; 
    std::cin >> k;
    std::cout << std::endl;
    
    for (int i = n; i < k; ++i)
    { 
        std::cout << array[i] << " ";
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    
    std::cout << std::endl << min;
    
}
#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    
    int rows;
    int cols;
    int max = 0;
    int max_index = 0; 
    cin >> rows;
    cols = rows;  
    int array[rows][cols]; 

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            array[i][j] = 10 + rand() % 31;
        }
    }
    
    for (int i = 0; i < rows; ++i)
    {
        int sum = 0;
        for (int j = 0; j < cols; ++j)
        {
            cout << array[i][j] << " ";
            sum += array[i][j];        
        }
        if (max < sum) 
        {
            max = sum;
            max_index = i;
        }    
        cout << endl;
    }
    
    cout << endl;
    
    for (int i = max_index; i < cols; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {            
            cout << array[max_index][j] << " ";     
        }
        break;
    }    
    
    cout << endl << max;
}

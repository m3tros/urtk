#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    
    int rows, cols;
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

    int max = array[0][0];
    int min = array[0][0];
    
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << array[i][j] << " ";
            if (array[i][j] > max)
            {
                max = array[i][j];
            }
            if (array[i][j] < min)
            {
                min = array[i][j];
            }
        }
        cout << endl;
    }
    
    cout << endl << max << endl << min;
    
}

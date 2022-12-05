#include <iostream>
int main()
{
    int arr[][3] = { {1, 2, 3},
                    {4, 5, 6},
                    {6,-5, 4},
                    {3, 2, 1} };
    int min = arr[0][0];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 3; j++)
            if (min > arr[i][j])
                min = arr[i][j];
    std::cout << min;
    return 0;
}
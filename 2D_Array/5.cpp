// Print Diagonal elements.

#include <iostream>
using namespace std;

int main()
{
    int a[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 7},
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 7},
        {1, 2, 3, 4, 5}};

    int i, j;
    int sum = 0;

    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            if (i == j)
            {
                cout << a[i][j] << " ";
                // sum += a[i][j];
                // cout << sum;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
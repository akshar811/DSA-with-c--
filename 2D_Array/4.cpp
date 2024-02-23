// Print Boundary elements.

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

    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            if (i == 0 || i == 4 || j == 0 || j == 4)
            {
                cout << a[i][j] << " ";
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
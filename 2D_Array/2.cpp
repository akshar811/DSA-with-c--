// find average of all elements of 2D array

#include <iostream>
using namespace std;

int main()
{
    int a[5][5] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5}};

    int length = sizeof(a) / sizeof a[0][0];
    int sum = 0;

    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            sum = sum + a[i][j];
        }
    }

    cout << "Average is " << sum / length << endl;

    return 0;
}
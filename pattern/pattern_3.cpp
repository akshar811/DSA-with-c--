#include <iostream>
using namespace std;

int main()
{

    /*  1
        2 3
        3 4 5
        5 6 7 8
        8 9 10 11
    */

    int i, j, k = 1;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
        k = k - i + 1;
    }
    return 0;
}
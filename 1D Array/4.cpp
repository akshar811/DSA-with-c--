// create a 1D array of all leap years from a given range.

#include <iostream>
using namespace std;

int main()
{
    int start, end, n, a[100], i, count = 0;

    cout << "Enter start year : ";
    cin >> start;

    cout << "Enter end year : ";
    cin >> end;

    for (n = start, i = 0; n <= end; n++, i++)
    {
        if (n % 4 == 0)
        {
            a[i] = n;
            count++;
        }
    }

    cout << endl
         << "Array is : ";

    for (n = 0; n < count; n++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;

}

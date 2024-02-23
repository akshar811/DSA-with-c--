// Reverse any 1D array

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of array : ";
    cin >> size;  

    int a[size];

    for (int i = 0; i < size; i++)

    {
        cout << "Enter element [" << i << "] : ";
        cin >> a[i];
    }             

    cout << "Original array: " << endl;

    for (int i = 0; i < size; ++i)

    {
        cout << a[i] << " ";
    }

    cout << endl;

    cout << "Reversed array: " << endl;

    for (int i = size - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }

    return 0;
}


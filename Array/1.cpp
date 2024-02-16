#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int a[size];
    int i;

    for (i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
    }

    cout << "The array elements are:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}

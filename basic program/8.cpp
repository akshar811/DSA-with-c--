// maximum number from given three numbers.

#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cout << "Enter the a , b , c : ";
    cin >> a >> b >> c;

    if (a == b && b == a && c == a)
    {
        cout << " all numbers are same ";
    }
    else
    {
        if (a > b)
        {
            if (a > c)
            {
                cout << "a is max... " << endl;
            }
            else
            {
                cout << "c is max... " << endl;
            }
        }
        else
        {
            if (b > c)
            {
                cout << "b is max... " << endl;
            }
            else
            {
                cout << "c is max... " << endl;
            }
        }
    }

    return 0;
}
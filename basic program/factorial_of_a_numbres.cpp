#include <iostream>
using namespace std;

int main()
{
    int i, n, fact;
    fact = 1;
    cout << "Enter any Numbers : ";
    cin >> n;

    i = n;
    
    while (i >= 1)
    {
        fact = fact * i;
        i--;
    }
    cout << "Factorial is " << fact << endl;

    return 0;

}

#include <iostream>
using namespace std;

int main()
{

    int num, sum, firstdigit, lastdigit;
    sum = 0;

    cout << "Enter any number : ";
    cin >> num;

    lastdigit = num % 10;
    while (num >= 10)
    {
        num = num / 10;
    }

    firstdigit = num;
    sum = firstdigit + lastdigit;
    cout << "Sum is :" << sum << endl;

    return 0;
    
}
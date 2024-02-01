#include <iostream>
using namespace std;

int main()

{
    // dynamic program

    int a;
    int b;
    int c;
    int d;


    cout << "Enter the value of a : ";
    //cin means input from the user
    cin >> a;

    cout << "Enter the value of b : ";
    cin >> b;

    c = a + b;
    d = a * b;

    cout << "sum of the a + b : " << c << endl;
    
    cout << "Multiplication of the a * b : " << d;

    return 0;
}
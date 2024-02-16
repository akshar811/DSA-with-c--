#include <iostream>
using namespace std;

int main()
{
    int i , num ;
    cout << "Enter any number : ";
    cin >> num;

    i=1;
    while(i<=10)
    {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }
    
    return 0;
}
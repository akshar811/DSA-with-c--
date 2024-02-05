#include <iostream>
using namespace std;

int main()
{
    //ladder statement 

    int age ; 
    
    cout << "enter your age = " ;
    cin >> age;

    if(age < 18)
    {
        cout << "you can not eligible" << endl;
    }
    else if (age >=18)
    {
        cout << "you can eligible" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    //implicit type conversion 

    // int num1 = 18;
    // int num2 = 5.5;

    // float ans = num1 + num2;

    // explicit type conversion
    
     int num1 = 18;
    float num2 = 5.5;

    int ans = num1 + (int)num2;

    cout << ans;

    return 0;
}
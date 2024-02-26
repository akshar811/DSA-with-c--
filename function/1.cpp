#include <iostream>
using namespace std;

void addition(float, float);
void subtraction(float, float);
void multiplication(float, float);
void division(float, float);

int main()
{
    int choice;
    do
    {

        float a, b;

        cout << "Press 1 for Addition : " << endl;
        cout << "Press 2 for subtraction : " << endl;
        cout << "Press 3 for multiplication : " << endl;
        cout << "Press 4 for division : " << endl;
        cout << "Press 0 for exit : " << endl;

        cout << endl;

        cout << "Enter Your choice : ";
        cin >> choice;

        cout << endl;

        if (choice == 0)
            break;

        cout << "Enter Two Numbers: ";
        cin >> a >> b;

        cout << endl;

        switch (choice)
        {
        case 1:
            addition(a, b);
            break;
        case 2:
            subtraction(a, b);
            break;
        case 3:
            multiplication(a, b);
            break;
        case 4:
            division(a, b);
            break;
        case 0:
            break;

        default:
            cout << "Enter valid choice......" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}

void addition(float a, float b)
{
    cout << "addition is : " << a + b << endl;
}
void subtraction(float a, float b)
{
    cout << "subtraction is : " << a - b << endl;
}
void multiplication(float a, float b)
{
    cout << "multiplication is : " << a * b << endl;
}
void division(float a, float b)
{
    cout << "division is : " << a / b << endl;
}


// food menu using switch statement

#include <iostream>
using namespace std;

int main()
{
    int choice;
    double totalPrice = 0.0;

    cout << "Welcome to the Food Menu!" << endl;
    cout << "1. Pizza" << endl;
    cout << "2. Burger" << endl;
    cout << "3. Pasta" << endl;
    cout << "4. Salad" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You have selected Pizza." << endl;

        int pizzaChoice;
        double pizzaPrice;

        cout << "-----------------------------------------" << endl;

        cout << "Select a variety of pizza:" << endl;

        cout << "-----------------------------------------" << endl;

        cout << "1. Cheese Pizza ($8.99)" << endl;
        cout << "2. Veggie Pizza ($9.99)" << endl;
        cout << "3. Pepperoni Pizza ($10.99)" << endl;
        cout << "4. Meat Pizza ($11.99)" << endl;
        cout << "5. Margherita Pizza ($9.49)" << endl;
        cout << "Enter your choice: ";

        cin >> pizzaChoice;

        switch (pizzaChoice)

        {
        case 1:
            cout << "You have selected Cheese Pizza." << endl;
            pizzaPrice = 8.99;
            break;
        case 2:
            cout << "You have selected Veggie Pizza." << endl;
            pizzaPrice = 9.99;
            break;
        case 3:
            cout << "You have selected Pepperoni Pizza." << endl;
            pizzaPrice = 10.99;
            break;
        case 4:
            cout << "You have selected Meat Pizza." << endl;
            pizzaPrice = 11.99;
            break;
        case 5:
            cout << "You have selected Margherita Pizza." << endl;
            pizzaPrice = 9.49;
            break;
        default:
            cout << "Invalid choice. Please select a number between 1 and 4." << endl;
            pizzaPrice = 0.0;
        }
        totalPrice += pizzaPrice;

        break;

    case 2:
        cout << "You have selected Burger." << endl;

        int BurgerChoice;
        double BurgerPrice;

        cout << "-----------------------------------------" << endl;

        cout << "Select a variety of Burger:" << endl;

        cout << "-----------------------------------------" << endl;

        cout << "1. Hamburger ($14.99)" << endl;
        cout << "2. Turkey Burger ($17.40)" << endl;
        cout << "3. Classic Burger ($10.99)" << endl;
        cout << "4. Lamb Burger ($13.00)" << endl;
        cout << "5. Cheese Burger ($9.99)" << endl;
        cout << "Enter your choice: ";

        cin >> BurgerChoice;

        switch (BurgerChoice)
        {
        case 1:
            cout << "You have selected Hamburger." << endl;
            BurgerPrice = 14.99;
            break;
        case 2:
            cout << "You have selected Turkey Burger." << endl;
            BurgerPrice = 17.40;
            break;
        case 3:
            cout << "You have selected Classic Burger." << endl;
            BurgerPrice = 10.99;
            break;
        case 4:
            cout << "You have selected Lamb Burger." << endl;
            BurgerPrice = 13.00;
            break;
        case 5:
            cout << "You have selected Cheese Burger." << endl;
            BurgerPrice = 9.49;
            break;
        default:
            cout << "Invalid choice. Please select a number between 1 and 4." << endl;
            BurgerPrice = 0.0;
        }
        totalPrice += BurgerPrice;
        break;

    case 3:
        cout << "You have selected Pasta." << endl;

        int PastaChoice;
        double PastaPrice;

        cout << "-----------------------------------------" << endl;

        cout << "Select a variety of Pasta:" << endl;

        cout << "-----------------------------------------" << endl;

        cout << "1. Potato Gnocchi ($6.99)" << endl;
        cout << "2. Linguine ($7.40)" << endl;
        cout << "3. Bucatini ($10.99)" << endl;
        cout << "4. Tagliatelle ($13.00)" << endl;
        cout << "5. Pappardelle ($9.99)" << endl;
        cout << "Enter your choice: ";

        cin >> PastaChoice;

        switch (PastaChoice)
        {
        case 1:
            cout << "You have selected Potato Gnocchi." << endl;
            PastaPrice = 6.99;
            break;
        case 2:
            cout << "You have selected Linguine." << endl;
            PastaPrice = 7.40;
            break;
        case 3:
            cout << "You have selected Bucatini." << endl;
            PastaPrice = 10.99;
            break;
        case 4:
            cout << "You have selected Tagliatelle." << endl;
            PastaPrice = 13.00;
            break;
        case 5:
            cout << "You have selected Pappardelle." << endl;
            PastaPrice = 9.49;
            break;
        default:
            cout << "Invalid choice. Please select a number between 1 and 4." << endl;
            PastaPrice = 0.0;
        }

        totalPrice += PastaPrice;
        break;

    case 4:
        cout << "You have selected Salad." << endl;

        int SaladChoice;
        double SaladPrice;

        cout << "-----------------------------------------" << endl;

        cout << "Select a variety of Salad:" << endl;

        cout << "-----------------------------------------" << endl;

        cout << "1. Potato Gnocchi ($16.99)" << endl;
        cout << "2. Linguine ($17.40)" << endl;
        cout << "3. Bucatini ($10.99)" << endl;
        cout << "4. Tagliatelle ($17.00)" << endl;
        cout << "5. Pappardelle ($9.99)" << endl;
        cout << "Enter your choice: ";

        cin >> SaladChoice;

        switch (SaladChoice)
        {
        case 1:
            cout << "You have selected Potato Gnocchi." << endl;
            SaladPrice = 6.99;
            break;
        case 2:
            cout << "You have selected Linguine." << endl;
            SaladPrice = 7.40;
            break;
        case 3:
            cout << "You have selected Bucatini." << endl;
            SaladPrice = 10.99;
            break;
        case 4:
            cout << "You have selected Tagliatelle." << endl;
            SaladPrice = 17.00;
            break;
        case 5:
            cout << "You have selected Pappardelle." << endl;
            SaladPrice = 9.49;
            break;
        default:
            cout << "Invalid choice. Please select a number between 1 and 4." << endl;
            SaladPrice = 0.0;
        }

        totalPrice += SaladPrice;
        break;

    case 5:
        cout << "Exiting program. Goodbye!" << endl;
        break;
    default:
        cout << "Invalid choice. Please select a number between 1 and 5." << endl;
    }

    double gst = totalPrice * 0.18;
    totalPrice += gst;

    cout << "Total Price (including 18% GST): $" << totalPrice << endl;

    return 0;
}

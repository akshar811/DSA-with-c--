// To check whether any number is magic or not.

#include <iostream>
using namespace std;

int Digitsum(int n) {
    if (n == 0) {
        return 0;
    } else {
        int a = n % 10 + Digitsum(n / 10);
        return a;
    }
}

int Digits(int n) {
    if (n == 0) {
        return 1;
    } else {
        int b= (n % 10) * Digits(n / 10);
        return b;
    }
}

bool Magic(int n) {
    int sum = Digitsum(n);
    int pro = Digits(n);
    return sum == pro;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (Magic(num)) {
        cout << num << " is a magic number." << endl;
    } else {
        cout << num << " is not a magic number." << endl;
    }

    return 0;
}

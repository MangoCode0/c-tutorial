#include <iostream>
using namespace std;

int printFibonacci(int n) {
    int a = 0, b = 1, next;

    cout << a << " " << b << " ";

    for (int i = 3; i <= n; ++i) {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int terms;

    cout << "Enter the number of terms: ";
    cin >> terms;

    if (terms >= 1) {
        printFibonacci(terms);
    } else {
        cout << "Please enter a positive int." << endl;
    }

    return 0;
}

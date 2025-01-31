// #include<iostream>
// using namespace std;

// int fibo(int n){
//     int first ,sec, next;
//     for (int i=0; i<n ;i++){
//         first=0;
//         sec =1;
//         // cout<<first<<endl<<sec<<endl;
//         next=first+sec;
//         cout<<"fibonscci : "<<first<<endl<<sec<<endl<<next<<endl;
//         first=sec;
//         sec=next;
//         // cout<<"fibonscci : "<<first<<endl<<sec<<endl<<next<<endl;
//     }
//     // cout<<"fibonscci : "<<i<<endl
// }
// int main(){
//      fibo(7);
// }
#include <iostream>
using namespace std;

// Function to return the nth Fibonacci number
int fibonacci(int n) {

    n= 0;
    if (n <= 1) {
        return n; // Base cases: fib(0) = 0, fib(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursion
}

int main() {
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci sequence up to term " << n << " is:\n";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}

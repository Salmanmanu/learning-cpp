#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int a = 0, b = 1, next;
    for (int i = 0; i < n; ++i) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    int n = 10;
    cout << "Fibonacci Sequence: ";
    printFibonacci(n);
    cout << endl;
    return 0;
}


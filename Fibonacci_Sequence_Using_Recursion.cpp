#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;  // Base cases
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

int main() {
    int terms = 10;
    cout << "Fibonacci sequence up to " << terms << " terms: ";
    for (int i = 0; i < terms; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}

#include <iostream>
#include <stack>
#include <cmath>
#include <cctype>
using namespace std;

int evaluatePrefix(string expression) {
    stack<int> s;
    for (int i = expression.length() - 1; i >= 0; i--) {
        if (isdigit(expression[i])) {
            s.push(expression[i] - '0');
        } else {
            int op1 = s.top(); s.pop();
            int op2 = s.top(); s.pop();
            switch (expression[i]) {
                case '+': s.push(op1 + op2); break;
                case '-': s.push(op1 - op2); break;
                case '*': s.push(op1 * op2); break;
                case '/': s.push(op1 / op2); break;
                case '^': s.push(pow(op1, op2)); break;
            }
        }
    }
    return s.top();
}

int main() {
    string expression = "-+7*45+20";
    cout << "Prefix Evaluation: " << evaluatePrefix(expression) << endl;
    return 0;
}


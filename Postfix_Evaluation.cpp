#include <iostream>
#include <stack>
#include <cmath>
#include <cctype>
using namespace std;

int evaluatePostfix(string expression) {
    stack<int> s;
    for (char ch : expression) {
        if (isdigit(ch)) {
            s.push(ch - '0');
        } else {
            int op2 = s.top(); s.pop();
            int op1 = s.top(); s.pop();
            switch (ch) {
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
    string expression = "45*7+20+-";
    cout << "Postfix Evaluation: " << evaluatePostfix(expression) << endl;
    return 0;
}

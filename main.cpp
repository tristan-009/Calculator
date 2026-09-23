#include <iostream>
#include <string>
using namespace std;

static int addition(const int a, const int b) {
    return a + b;
}

static int soustraction(const int a, const int b) {
    return a - b;
}

static int multiplication(const int a, const int b) {
    return a * b;
}

static double division(const double a, const double b) {
    if (b == 0) {
        cout << "Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    cout << "Hello Calculator !" << endl;

    cout << "Choisis un nombre : ";
    int number_a = 0;
    cin >> number_a;

    cout << "Choisis un autre nombre : ";
    int number_b = 0;
    cin >> number_b;

    cout <<"Choisis une operation entre *, +, -, / :";
    string op;
    cin >> op;

    if (op == "+") {
        cout << addition(number_a, number_b) << endl;
    } else if (op == "-") {
        cout << soustraction(number_a, number_b) << endl;
    } else if (op == "*") {
        cout << multiplication(number_a, number_b) << endl;
    } else {
        cout << division(number_a, number_b) << endl;
    }
}

#include <iostream>
using namespace std;

int main()
{
    int num1;
    cout << "Enter num1: ";
    cin >> num1;

    int num2;
    cout << "Enter num2: ";
    cin >> num2;

    char sym;
    cout << "Enter + ; - ; * ; / : ";
    cin >> sym;

    if (sym == '+') {
        cout << "Succesfuly: " << num1 + num2 << endl;
    }
    else if (sym == '-') {
        cout << "Succesfuly: " << num1 - num2 << endl;
    }
    else if (sym == '*') {
        cout << "Succesfuly: " << num1 * num2 << endl;
    }
    else if (sym == '/') {
        cout << "Succesfuly: " << num1 / num2 << endl;
    }
}

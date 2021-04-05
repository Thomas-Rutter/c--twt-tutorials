#include <iostream>
#include <string>
using namespace std;

void giveNumber () {
    cout << "Starting, enter a number: " << endl;
    int number;
    cin >> number;
    if (cin.fail())
    {
        cout << "That wasn't a number." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
    else
    {
        cout << number << endl;
    }
}

void giveName (string welcome) {
    string name;

    cout << "Please enter your name:" << endl;
    cin >> name;
    cout << welcome + name << endl;
}

int sumNumbers (int num1, int num2) {
    return num1 + num2;
}

int main() {
    giveNumber();

    string welcome = "Good to see you again, ";
    giveName(welcome);

    int num1, num2;
    cout << "Enter a number: ";
    cin >> num1;
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Enter another number: ";
    cin >> num2;
    int sum = sumNumbers(num1, num2);

    cout << "The sum of those numbers is: " << sum;
}

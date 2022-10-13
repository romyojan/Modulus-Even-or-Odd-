#include <iostream>

using namespace std;

int main() {
    int inputNumber;
    cout << "How Modulus(%) Operator Works" << endl << endl;
    //ask user to input a number 
    cout << "Enter Number: ";
    cin >> inputNumber;
    //Check if Even or Odd
    if (inputNumber % 2 == 0) {
        cout << inputNumber << " is an even number." << endl;
    } else {
        cout << inputNumber << " is an odd number." << endl;
    }
    return 0;
}
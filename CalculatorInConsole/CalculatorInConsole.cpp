// CalculatorInConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int operation;

    cout << "Hello World!\n";

    cout << "This is a calculator software in C++\n\n";

    cout << "Operations\n 1. Sum\n 2. Subtraction\n 3. Multiplication \n 4. Division\n\n";

    cout << "Input the operation number: ";

    cin >> operation;

    if (operation == 1) {

        cout << "Sum.\n";
        int x, y;

        cout << "Input your first number: ";
        cin >> x;

        cout << "Input your second number: ";
        cin >> y;

        int result = x + y;

        cout << "The resulting sum is: " << result << endl;

    }   else if (operation == 2) {

            cout << "Subtraction.\n";
            int x, y;

            cout << "Input your first number: ";
            cin >> x;

            cout << "Input your second number: ";
            cin >> y;

            int result = x - y;

            cout << result << endl;

        }   else if (operation == 3) {
            
            cout << "Multiplication.\n";
            int x, y;

            cout << "Input your first number: ";
            cin >> x;

            cout << "Input your second number: ";
            cin >> y;

            int result = x * y;

            cout << result << endl;
    
        }   else if (operation == 4) {

            cout << "Division.\n";
            int x, y;

            cout << "Input your first number: ";
            cin >> x;

            cout << "Input your second number: ";
            cin >> y;

            int result = x / y;

            cout << result << endl;

        }
        else {
            
        cout << "Not valid.";

        }
    
    cout << "New branch all operations only\n\n\n\n ok";



    }


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>

using namespace std;

void addition();
void subtraction();
void multiplication();
void division();
void exponentiation();

int main()
{
    bool calculateAgain = true;
    char choice;

    while (calculateAgain == true)
    {
        cout << "Welcome to the basic calculator! Please choose which operation you would like to perform\n";
        cout << "Enter 1 for addition.\n";
        cout << "Enter 2 for subtraction.\n";
        cout << "Enter 3 for multiplication.\n";
        cout << "Enter 4 for division.\n";
        cout << "Enter 5 for exponentiation.\n";
        cout << "Enter any other character to quit the program.\n";
        cin >> choice;

        switch (choice)
        {
        case '1':
            addition();
            break;
        case '2':
            subtraction();
            break;
        case '3':
            multiplication();
            break;
        case '4':
            division();
            break;
        case '5':
            exponentiation();
            break;
        default:
            calculateAgain = false;
            break;
        }
    }

    return 0;
}

void addition()
{
    int a, b;

    cout << "You have chosen addition\n\n\n";
    cout << "Please enter a number " << endl;
    cin >> a;
    cout << "Please enter a second number to add to the first number " << endl;
    cin >> b;

    cout << "The two numbers added together equal \n\n\n" << a + b << endl;
}

void subtraction()
{
    int a, b, result;

    cout << "You have chosen subtraction\n\n\n";
    cout << "Please enter a number " << endl;
    cin >> a;
    cout << "Please enter a second number to subtract from the first number " << endl;
    cin >> b;

    result = a - b;
    cout << "The first number minus the second equals \n\n\n" << result << endl;
}

void multiplication()
{
    int a, b, result;

    cout << "You have chosen multiplication\n\n\n";
    cout << "Please enter a number " << endl;
    cin >> a;
    cout << "Please enter a second number to add to the first number " << endl;
    cin >> b;

    result = a * b;
    cout << "The numbers multiplied together equal \n\n\n" << result << endl;
}

void division()
{
    double a, b, result;

    cout << "You have chosen division\n\n\n";
    cout << "Please enter a number to be divided by the second number" << endl;
    cin >> a;
    cout << "Please enter the second number" << endl;
    cin >> b;

    result = a / b;
    cout << "The first number divided by the second number equals \n\n\n" << result << endl;
}

void exponentiation()
{
    double a, b, result = 1;

    cout << "You have chosen exponentiation\n\n\n";
    cout << "Please enter a base number" << endl;
    cin >> a;
    cout << "Please enter a power for the base number to be raised to" << endl;
    cin >> b;

    for (int i = 0; i < b; i++)
        result *= a;

    cout << "The first number to the power of the second number equals \n\n\n" << result << endl;
}

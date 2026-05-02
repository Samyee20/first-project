// Question 2(Advance) : Calculator program

#include <iostream>
using namespace std;

// Function Prototypes
void displayMenu();
void getInput(char& op, int& n1, int& n2);
bool calculate(char op, int n1, int n2, double& res);
void displayResult(char op, int n1, int n2, double res);

int main()
{
    char operation, choice;
    int num1, num2;
    double result;
    bool valid;

    displayMenu();   // show menu once

    do
    {
        getInput(operation, num1, num2);

        if (operation == 'x' || operation == 'X')
            break;

        valid = calculate(operation, num1, num2, result);

        if (valid)
            displayResult(operation, num1, num2, result);
        else
            cout << "\nInvalid operation.\n";

        // only y or n accepted
        do
        {
            cout << "\nEnter y or Y to continue : ";
            cin >> choice;

            if (choice != 'y' && choice != 'Y' &&
                choice != 'x' && choice != 'X')
            {
                cout << "Invalid input. Please enter y to continue or x to exit only.\n";
            }

        } while (choice != 'y' && choice != 'Y' &&
            choice != 'x' && choice != 'X');

        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

// display menu
void displayMenu()
{
    cout << "            MENU           \n";
    cout << "***************************\n";
    cout << "+ : Add\n";
    cout << "- : Subtract\n";
    cout << "* : Multiply\n";
    cout << "/ : Divide\n";
    cout << "x : Exit\n";
    cout << "\n";
}

// get user input
void getInput(char& op, int& n1, int& n2)
{
    cout << "\nEnter your choice : ";
    cin >> op;

    if (op != 'x' && op != 'X')
    {
        cout << "Enter first number : ";
        cin >> n1;

        cout << "Enter second number : ";
        cin >> n2;
    }
}

// calculate result
bool calculate(char op, int n1, int n2, double& res)
{
    if (op == '+')
        res = n1 + n2;

    else if (op == '-')
        res = n1 - n2;

    else if (op == '*')
        res = n1 * n2;

    else if (op == '/')
    {
        // only second number cannot be 0
        if (n2 == 0)
            return false;

        res = (double)n1 / n2;
    }
    else
        return false;

    return true;
}

// display answer
void displayResult(char op, int n1, int n2, double res)
{
    cout << "\n" << n1 << " " << op << " " << n2
        << " = " << res << endl;
}
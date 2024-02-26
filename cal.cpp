#include <iostream>
using namespace std;

void add()
{
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Addition : "<<(num1 + num2)<<endl;
}
void sub()
{
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Subtraction : " <<(num1 - num2)<<endl;
}
void mul()
{
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Multiplication : " << (num1 * num2)<<endl;
}
void div()
{
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num2 != 0)
    {
        cout<<"Division : "<<(num1 / num2)<<endl;
    }
    else
    {
        cout << "Error: Cannot divide by zero.\n";
    }
}

int main()
{
    int choice;
    do
    {
        cout << "Press 1 for + Addition." << endl;
        cout << "Press 2 for - Subtraction." << endl;
        cout << "Press 3 for * Multiplication." << endl;
        cout << "Press 4 for / Division." << endl;
        cout << "Press 0 for Exit." << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {

        case 1:
             add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            div();
            break;
        case 0:
            cout << "Program terminated." << endl;
        default:
            cout << "Invaild value.....";
            break;
        }
        cout << endl;
    } while (choice != 0);
    return 0;
}
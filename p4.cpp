#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << endl
         << "-------ladder statement-------" << endl;
    cout << "--: Program 1 : WAP to find maximum number frome given three number :--" << endl;
    cout << endl
         << "Enter A : ";
    cin >> a;
    cout << "Enter B : ";
    cin >> b;
    cout << "Enter C : ";
    cin >> c;
    cout << "A : " << a << endl;
    cout << "B : " << b << endl;
    cout << "C : " << c << endl;

    if (a > b)
    {
        cout << "A is max!" << endl;
    }
    else if (b > c)
    {
        cout << "B is max!" << endl;
    }
    else
    {
        cout << "C is max!" << endl;
    }

    cout << "--: Program 2 : WAP to check a person is capable for voting or not. :--" << endl;
    int age;
    cout << "Enter your age : ";
    cin >> age;

    if (age < 18)
    {
        cout << "You can't vote!" << endl;
    }
    else if (age > 18)
    {
        cout << "You can vote!" << endl;
    }
    else if (age == 18)
    {
        cout << "You can vote!" << endl;
    }
    else
    {
        cout << "You can't vote !" << endl;
    }
    return 0;
}

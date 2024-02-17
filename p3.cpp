#include <iostream>
using namespace std;

/*control structure :
1. selection
2. sequential
3. repeation

1.selection structure:
- if statement
- if else
- ladder
*/

int main()
{

    int a, b;
    cout << "Enter A : ";
    cin >> a;
    cout << "Enter B : ";
    cin >> b;

    cout << "--: WAP to find maximum number frome given two number :--" << endl;

    cout << endl
         << "-------if statement-------" << endl;
    cout << "A : " << a << endl;
    cout << "B : " << b << endl;
    if (a > b)
    {
        cout << "A is max!" << endl;
    }

    cout << endl
         << "-------if else statement-------" << endl;
    cout << endl
         << "Enter A : ";
    cin >> a;
    cout << "Enter B : ";
    cin >> b;
    cout << "A : " << a << endl;
    cout << "B : " << b << endl;
    if (a > b)
    {
        cout << "A is max!" << endl;
    }
    else
    {
        cout << "B is max!" << endl;
    }
}
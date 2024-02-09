#include <iostream>
#define Num2 20
using namespace std;
//cin, cout object,variable,datatype,constant
int main()
{

    int num;
    cout << "Enter A Number :  "; // cout object
    cin >> num;                   // cin object
    cout << "Number is: " << num << endl;

    int a = 20;
    float b = 3.30;
    char c = 'A';
    string d = "India";
    double e = 55.40957;
    bool f = true;

    cout << "int a=" << a << endl
         << "float b=" << b << endl
         << "char c=" << c << endl
         << "string d=" << d << endl
         << "double e=" << e << endl
         << "boolean f=" << f<<endl;

    const int Num1=25;
    cout<<"const Num1 :"<<Num1<<endl;
    cout<<"const Num2 :"<<Num2;
    return 0;
}
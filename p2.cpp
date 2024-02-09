#include<iostream>
using namespace std;
//operator,operator precodence,type coversion
int main(){

    int a,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;

    cout<<"--------------binary operator-------------"<<endl; 
    cout<<"-- Arithmentic --"<<endl;
    cout<<"A + B = "<<a+b<<endl;
    cout<<"A - B = "<<a-b<<endl;
    cout<<"A * B = "<<a*b<<endl;
    cout<<"A / B = "<<a/b<<endl;
    cout<<"A % B = "<<a%b<<endl;

    cout<<"-- Relational --"<<endl;
    cout<<"(A < B) = "<<(a<b)<<endl;
    cout<<"(A > B) = "<<(a>b)<<endl;
    cout<<"(A <= B) = "<<(a<=b)<<endl;
    cout<<"(A >= B) = "<<(a>=b)<<endl;
    cout<<"(A == B) = "<<(a==b)<<endl;
    cout<<"(A != B) = "<<(a!=b)<<endl;

    cout<<"-- Logical --"<<endl;
    if(a+b && a+b){
        cout<<"(A+B && A+B) is true"<<endl;
    }
    else{
        cout<<"(A+B && A+B) is false"<<endl;
    }

    if(a+b || a-b){
        cout<<"(A+B || A+B) is true"<<endl;
    }
    else{
        cout<<"(A+B || A+B) is false"<<endl;
    }
    
    cout<<"-- Assignment --"<<endl;
    cout<<"(A = B) = "<<(a=b)<<endl;
    cout<<"(A += B) = "<<(a+=b)<<endl;
    cout<<"(A -= B) = "<<(a-=b)<<endl;
    cout<<"(A *= B) = "<<(a*=b)<<endl;
    cout<<"(A /= B) = "<<(a/=b)<<endl;
    cout<<"(A %= B) = "<<(a%=b)<<endl;

cout<<"--------------unary operator-------------"<<endl; 
cout<<"---prefix--"<<endl;
cout<<"Increment ++A : "<<++a<<endl;
cout<<"decrement --B : "<<--b<<endl;
cout<<"---postfix--"<<endl;
cout<<"Increment A++ : "<<++a<<endl;
cout<<"decrement B-- : "<<--b<<endl;


cout<<"--------------operator precodence-------------"<<endl; 
cout<<"8 * 4 / 2 - 16 + 4 * 4 / 2 = "<<8*4/2-16+4*4/2<<endl;
cout<<"8 * 4 / (2 - 16) + 4 * 4 / 2 = "<<8*4/(2-16)+4*4/2<<endl;
cout<<"8 * 4 / ((2 - 16) + 4 )* 4 / 2 = "<<8*4/((2-16)+4)*4/2<<endl;


cout<<"--------------Type conversion-------------"<<endl;
int num1=10; 
float num2=5.5;
cout<<"--implicit--"<<endl;
float ans1=num1+num2;
cout<<"Ans1 = "<<ans1<<endl;
cout<<"--explicit--"<<endl;
int ans2=num1+int(num2);
cout<<"Ans2 = "<<ans2<<endl;

}
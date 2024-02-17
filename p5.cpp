#include<iostream>
using namespace std;

// nested statement
/*WAP to find maximum number frome given three number

Algorithm : 

1.input three numbers. a,b,c
2.compare a and b
3.compare the max number with c
4.display the max number

flowchart :


*/
int main(){

    int a,b,c;
     cout<<"Enter value of a,b,c : ";
     cin>>a>>b>>c;

     //if all values are same
     if(a==b & b==c && c==a){
        cout<<"All  values are same!"<<endl;
     }     

     //find max 
     if(a>b)
     {
        if(a>c){
                cout<<"A is max!"<<endl;
            }
            else
            {
               cout<<"C is Max!"<<endl;
            }
        }

     else{
        if(b>c){
                 cout<<"B is max!"<<endl;
            }
            else{
                 cout<<"C is max!"<<endl;
            }
     }
}
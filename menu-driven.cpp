#include<iostream>
using namespace std;

 int main()
 {
    
 int choice;
    cout<<"********** Food Menu **********"<<endl;
    cout<<"Press 1 For Oreder Starters."<<endl;
    cout<<"Press 2 For Oreder Main Course."<<endl;
    cout<<"Press 3 For Oreder Desserts."<<endl;
    cout<<"Press 4 For Display Bil."<<endl;
    cout<<"Press 5 For Exit."<<endl;
    cout<<"*******************************"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;

    switch (choice)
    {
        case 1:cout<<"You ordered Starters"<<endl; break;
        case 2:cout<<"You ordered Main Course"<<endl; break;
        case 3:cout<<"You ordered Desserts"<<endl; break;
        case 4:cout<<"You ordered Display Bil"<<endl; break;
        case 5:cout<<"exit"<<endl; break;
    }
 }
     
   
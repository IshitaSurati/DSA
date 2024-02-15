#include<iostream>
using namespace std;

int main(){

    //I
    cout<<endl;
    for(int i=1;i<=5;i++){
        if(i==1 || i==5){
            cout<<"* * * * *"<<endl;
        }
        else
        {
            cout<<"    *    "<<endl;
        }
    }
    cout<<endl;
    //S
     for(int s=1;s<=5;s++)
        if(s==1 || s==3 || s==5){
            cout<<"* * * * *"<<endl;
        }
        else if(s==2)
        {
            cout<<"*         "<<endl;
        }
        else if(s==4)
         {
            cout<<"        *"<<endl;
        }
        cout<<endl;
    //H
    for(int h=1;h<=5;h++){
        if( h==3){
            cout<<"* * * * *"<<endl;
        }
        else{
          cout<<"*       *"<<endl;  
        }
    }
    cout<<endl;
     //I
    for(int i=1;i<=5;i++){
        if(i==1 || i==5){
            cout<<"* * * * *"<<endl;
        }
        else
        {
            cout<<"    *    "<<endl;
        }
    }
    cout<<endl;

    //T
     for(int t=1;t<=5;t++){
        if(t==1){
            cout<<"* * * * *"<<endl;
        }
        else
        {
            cout<<"    *    "<<endl;
        }
    }
    cout<<endl;

    //A
    for(int a=1;a<=5;a++){
        if(a==1 || a==3 ){
            cout<<"* * * * *"<<endl;
        }
        else{
           cout<<"*       *"<<endl;   
        }
    }
    cout<<endl;

}




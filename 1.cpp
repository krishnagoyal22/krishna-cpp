#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    bool x ;
    cout<<"please enter the first number :"<<endl;
    cin>>a;
    cout<<"please enter the second number :"<<endl;
    cin>>b;
    cout<<"do you want the +,-,*,/ (y/n):"<<endl;
    bool y=true;
    bool n=false;
    cin>>y,n;
    if (x ==true){
    cout<<"a+b is "<<a+b<<endl;
    cout<<"a-b is "<<a-b<<endl;
    cout<<"a*b is "<<a*b<<endl;
    cout<<"a/b is "<<(float)a/b<<endl;}
    else if (x==false){
        cout<<"-_-";
    }
     else {
        cout<<"invalid input";
     }
     

}
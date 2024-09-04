#include <iostream>
#include<cmath>
using namespace std;
//checking odd integers
bool prime(int m){
    for(int i=2;i<=m-1;i++)
    {
        if(m%i==0){
            return false;
        }
        }
        return true;
    }
bool logic(int n){

  if(n%2==0){
        return false;}
    else{
        return true;
    }
}
int main(){
    int f;int l;
    cout<<"enter first and last digits"<<"\n";
    cin>>f>>l;
    cout<<"odd numbers are :"<<endl;
    for(int i=f;i<=l;i++){
        if(logic(i)){
            cout<<i<<endl;

        }  }
        cout<<"prime numbers are :"<<endl;
        for(int i=f;i<=l;i++){
            if(prime(i)){
                cout<<i<<endl;
            }
        }

}
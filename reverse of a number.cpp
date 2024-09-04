#include <iostream>
using namespace std;
int main(){
        //reverse of a number
int n;
cout<<"Enter a digit"<<endl;
cin>>n;
int reverse=0;
while(n>0){
    int ldigg=n%10;
    reverse = reverse*10 + ldigg;
    n/=10;
}
cout<<reverse;
}
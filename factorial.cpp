#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a digit "<<endl;
    cin>>n;

    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial*=i;
        cout<<factorial<<endl;
    }

}
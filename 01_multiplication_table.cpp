#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the value of number whose multiplication table is to be printed :"<<endl;
    cin>>num;
    for (int i=1; i<=10; i++)
    {
        cout<<num<<"*"<<i<<"="<<num*(i)<<endl;
    }

}
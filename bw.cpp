#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter two digits"<<endl;
    cin>>n>>m;
    cout<<endl;
    cout<<"#1"<<endl;
    //star pyramid
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";

        }
        for(int j=1;j<=(2*i-1);j++)
        {
            cout<<"*";

        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"#2"<<endl;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<j;
        }
        for(int j=1;j<=(i-1);j++)
        {
            cout<<j;
        }
        
        cout<<endl;

    }
    cout<<endl;
    cout<<"#3"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"1";
            }
            else{
                cout<<"2";
            }
        }
        cout<<endl;

    }
    cout<<endl;
    cout<<"#4"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"#5"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=(i-1);j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
    
}
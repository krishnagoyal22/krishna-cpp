#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter two digits"<<endl;
    cin>>n>>m;
    cout<<endl;
    cout<<"#6"<<endl;
    // Hollow triangle
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
           if( i==1 || j==1 || j==i || i==n){ 
            cout<<i;}
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"#7"<<endl;
    // number of digits in a number
    int digits=0;
    while(n>0)
    {
        digits++;
        n=n/10;

    }
    cout<<digits<<endl;
    //sum of digits of given no.
    cout<<"#8"<<endl;
    int sum=0;
    while(n>0){
        int ldig=n%10;
        sum+=ldig;
        n/=10;
    }
    cout<<sum<<endl;

    
}
#include <iostream>
using namespace std;
int main(){
    int n;
    char ch='A';
    cout<<"enter a digit"<<endl;
    cin>>n;
for (int i=1;i<=n;i++){
        for(int j=0;j<(n-i);j++){
            cout<<" ";}
        for(int j=0;j<(2*i-1);j++){
            cout<<(char)(ch+j);}
        cout<<endl;
    }
    for (int i=n+1;i<=2*n-1;i++){
        for(int j=0;j<(i-n);j++){
            cout<<" ";}
        for(int j=0;j<(2*(2*n-i)-1);j++){
            cout<<(char)(ch+j);}
        cout<<endl;
    } 
    

    }
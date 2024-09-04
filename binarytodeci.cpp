#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter a digit:\n";
    cin>>n;

    int ans=0;
    int power=1;
    while(n>0){
        int ldig=n%10;
        ans+=ldig*power;
        power*=2;
        n/=10;
    }
    cout<<ans;
    //for vice versa change 10 to 2

    

}
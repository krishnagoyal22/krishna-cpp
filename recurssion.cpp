#include <iostream>
using namespace std;
int count=0;
int print(){
    if(count>1000){
    return 0;}
    cout<<count<<"\n";
    count++;
    print();
    return count;

}
int main(){
    print();
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int array[5] = {6,9,2,3,5};
    cout<<sizeof(array)/sizeof(array[0])<<endl;
    int size=sizeof(array)/sizeof(array[0]);
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=array[i];
        
    }
    cout<<sum<<endl;

    int max=array[0];
    for(int j=1;j<5;j++){
        if(array[j]>max){
            max=array[j];}
    }
    cout<<max;

}
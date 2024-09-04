#include <iostream>
#include <vector>
using namespace std;
int main(){
    //********Last occurence of element**********
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];

    }

    cout<<"Enter x"<<endl;
    int x;
    cin>>x;
    int occ=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occ=i;
        }
    }
    cout<<"It is present last at index : "<<occ<<endl;
    int numofocc=0;

    for(int ele:v){
        if(ele==x){
            numofocc++;
        }
    }
    cout<<"Number of occurences : "<<numofocc<<endl;
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<"number of elements greater than x are : "<<count<<endl;
    bool sortedflag=true;
    for(int i=1;i<6;i++){
        if(v[i]<=v[i-1]){
            sortedflag=false;
        }
    }
    cout<<"Is the vector sorted : "<<sortedflag;
     






}
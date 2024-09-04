#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fn_recursive(int arr[],int low, int high, int target){
    if(low>high) {return -1;}
    int mid=(low+high)/2;
    if(arr[mid]==target) {return mid;}
    else if(target>arr[mid]){return fn_recursive(arr,mid+1,high,target);}
    return fn_recursive(arr,low,mid-1,target);
}
int main(){
    int target;
    int n;
    cout<<"size of array :\n";
cin>>n;
    int arr[n];
    int low=0;
    int high=(n-1);
cout<<"array values in ascending order: \n";
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<"what is your target value:\n";
cin>>target;
int result = fn_recursive(arr,low,high,target);
cout<<"it is on the "<<result<<" index\n";
}
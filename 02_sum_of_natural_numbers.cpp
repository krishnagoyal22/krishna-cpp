#include <iostream>
using namespace std;
int returnMax(int array[], int n){
    int max=0;
    for (int i=0; i<n; i++)
    {
        if(array[i]>max){
            max= array[i];
        }

    }
    
    return max;

}

int main()
{
    int arr[]={87,999,456,375,234234,2342342,5345345,525};
    int max= returnMax(arr, 8);
    cout<<"The maximum element in this array is "<<max;
    return 0;
    cout<<"\a";


}
//count the number of odd elements in array

#include <iostream>
using namespace std;

int countodd( int arr[], int n);
 int main(){
    int n;
    cout <<" enter the number of element in array: "<<endl;    
    cin>>n;
    int arr[n];
    cout<<"enter element :"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   cout<< countodd(arr, n);
       return 0;
 }
 int countodd(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if (arr[i] % 2 != 0){
            count++;
        }
       
    }
    return count;
    
 }
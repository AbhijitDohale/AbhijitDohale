//reverse of an array error occur

#include <iostream>
using namespace std;

int reverse( int arr[], int n);
int main(){
int n;
cout<<"enter the no of element you want to reverse: "<<endl;
cin>>n;
int arr[n];
cout<<" enter the elments in the array: "<<endl;
for (int i=0 ; i< n; i++){
    cin>>arr[i];
}

for (int i=0; i<n; i++){
    cout<<arr[i];
 
}
return 0;

}
int reverse(int arr[], int n){
    for(int i=0; i<n; i++){
    int firstval = arr[i];
    int secondval = arr[n-i-1];
    arr[i] = firstval;
    arr[n-i-1] = secondval;
}
}
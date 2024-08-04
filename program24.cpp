#include <iostream>
using namespace std;

int main(){
int n;
cout<<"enter number:"<<endl;
cin>>n;

int row = 1, value = 1;
while(row<=n){
    int column = 1;
    value = row;
    while(column<=row){
        cout<<value<<" ";
        value = value + 1;
        column = column + 1;
    }
    cout<<endl;
    row = row + 1;
}
return 0;
}
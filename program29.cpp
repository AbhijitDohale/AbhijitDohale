// pattern - 13
#include <iostream>
using namespace std;

int main(){
int n;
cout<<"enter number:"<<endl;
cin>>n;

int row = 1;
char ch = 'A';
while (row <= n){
    int column= 1;
    while (column <= row){
        cout << ch<<" ";
      ch = ch + 1;
      column = column + 1;
    
    }
    cout <<endl;
    row = row + 1;
}
return 0;
}
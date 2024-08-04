#include <iostream>
using namespace std;

int main(){
int n;
cout<<"enter number:"<<endl;
cin>>n;
char ch ='A';
int row = 1;
while(row<=n){
    int column = 1;
    while(column <= row){
       ch = ('A'+n - row);
      // ch = ch + 1;
       cout<<ch<<" ";
       ch = ch + 1;
       column = column +1;

    }
    cout <<endl;
    row = row + 1;
}
return 0;
}
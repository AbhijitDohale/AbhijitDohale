//fibonaci sequence using arrays and loops

#include <iostream>
using namespace std;

int main(){
int n;
cout<<" enter the numbers you want to find fibonacci sequence :"<<endl;
cin>>n;

int fib[n];
fib[0] = 0;
fib[1] = 1;
 cout<<fib[0]<<endl; 
 cout<<fib[1]<<endl;

for (int i=2; i<=n; i++){
    fib[i] = fib[i-1] + fib [i-2];
    //return fib[i];
   
   cout<<fib[i]<<endl;
}
}
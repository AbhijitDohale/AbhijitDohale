//fibonacci sequence using recurssion

#include <iostream>
using namespace std;

int fibonacci(int n);
int main(){
int n;
cout<<"Enter the number :"<<endl;
cin>>n;

cout<<"The fibonacci sequence is :"<<fibonacci(n)<<endl;

    return 0;
}
int fibonacci(int n){
    
        if(n==0){
            return 0;
        }
        if (n==1){
        return 1;
        }
    
    int fibNm1 = fibonacci(n-1);
    int fibNm2 = fibonacci(n-2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}
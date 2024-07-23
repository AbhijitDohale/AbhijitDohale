//factorial of number using recurssion

#include <iostream>
using namespace std;
int fact(int n);
int main(){
int n;
cout<<"Enter number"<<endl;
cin>>n;
cout<<" fact is :"<<fact(n);
    return 0;
}

int fact(int n){
    if (n<=1){
        return 1;
    }

return  fact(n-1)*n;

}
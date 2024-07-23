 //sum of first n numbers


#include <iostream>
using namespace std;

int sum(int n);
int main(){
int n;
cout<<" Enter number: "<<endl;
cin>>n;

cout<<" the sum of first "<<n<<" numbers is :"<<sum(n)<<endl;

    return 0;
}

int sum(int n){
    if(n<1){
        return 0;
    }
    return sum(n-1) + n;
}
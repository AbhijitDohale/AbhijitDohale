//swapping of two numbers 

#include <iostream>
using namespace std;
int swap(int *a, int *b);
int main(){
int x = 3,  y = 5;
swap(&x,&y);
cout<<" values after swapping is :"<<x<<" and "<<y<<endl;
    return 0;
}

int swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout<<" values aftre swapping is :"<<*a<<" and "<<*b<<endl;
}
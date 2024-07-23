//perform sum, prod, and avg in a function using pinters

#include <iostream>
using namespace std;
void dowork(int a, int b, int *sum, int *prod, int *avg);
int main(){
int a = 5, b = 5;
int sum,prod,avg;
dowork(a,b, &sum, &prod, &avg);
cout<<"sum = "<<sum<<" prod = "<<prod<<" avg = "<<avg;
}

void dowork(int a, int b, int *sum,  int *prod, int *avg){
 *sum = a+b;
 *prod = a*b;
 *avg = (a+b)/2;
}
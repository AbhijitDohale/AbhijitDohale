//celsius to fahreheit conversion

#include <iostream>
using namespace std;
float fahrenheit(float celsius);
int main(){
float celsius;
cout<<" Enter the temperature in celsius: "<<endl;
cin>>celsius;
 
cout<<"The conversion of celsius into  fahrenheit is :"<< fahrenheit(celsius)<<endl;
    return 0;
} 
float fahrenheit(float celsius){
    return (9.0/5)*celsius + 32;
}
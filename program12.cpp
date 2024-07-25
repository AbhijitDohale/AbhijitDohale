// print the length of the string 

#include <iostream>
using namespace std;
int countlength(char arr[]);
int main(){
char name[100];
cout<<"enter name: ";
//fgets(name, 100, stdin);
cin>>name;
cout<<" Length is :"<<countlength(name)<<endl;
    return 0;
}
int countlength(char arr[]){ 
    int count = 0;
    for (int i=0; arr[i]!='\0'; i++){
        count++;
    }
    return count-1;
}
//check if a given character is present in a string or not

#include <iostream>
using namespace std;
 int character_check( char str[], char letter);
int main(){

 
    char str[100];
    cout<<"enter a string[name]: "<<endl;
    cin>>str;


    char letter;
    cout<<"enter a character/letter you want to check: "<<endl;
    cin>>letter;
 character_check(  str, letter);

    return 0;
}
int character_check( char str[], char letter){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==letter){
            cout<<"letter is presnt"<<endl;
            return 0;
        }

    }
         cout<<"not present ";
}
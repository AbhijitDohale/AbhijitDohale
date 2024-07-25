//get a one string from user and calculate the no of volves in that string

 #include <iostream>
 using namespace std;
int countvolves(char str[]);
 int main(){
    char str[100];
    cout<<" enter strin: "<<endl;
    cin>>str;
    cout<<" no of volves in string is :"<<countvolves(str);

    return 0;
 }
 int countvolves(char str[]){
    int count = 0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    return count;
 }
//structure example - store the infprmation of student 

#include <iostream>
#include<string>
using namespace std;

typedef struct student{
    int roll_no;
    string name; 
    float cgpa;
} abc;


int main(){
abc s1;
s1.roll_no = 2134;
s1.name = "abhijit";
//cout<<endl;
s1.cgpa = 7.91;
cout<<s1.roll_no<<endl;
cout<<s1.cgpa<<endl;
cout<<s1.name;
    return 0;
}
//enter 5 adresses & store them

 #include <iostream>
using namespace std;

struct address{
    int house_no;
    int block_no;
    char city[100];
    char state[100];
};

void printaddress(struct address d1);

int main(){

struct address d1[5];
cout<<"enter first address :"<<endl;
cin>>d1[0].house_no;
cin>>d1[0].block_no;
cin>>d1[0].city;
cin>>d1[0].state;

cout<<"enter second address :"<<endl;
cin>>d1[1].house_no;
cin>>d1[1].block_no;
cin>>d1[1].city;
cin>>d1[1].state;

cout<<"enter third address :"<<endl;
cin>>d1[2].house_no;
cin>>d1[2].block_no;
cin>>d1[2].city;
cin>>d1[2].state;

cout<<"enter fourth address :"<<endl;
cin>>d1[3].house_no;
cin>>d1[3].block_no;
cin>>d1[3].city;
cin>>d1[3].state;

cout<<"enter fifth address :"<<endl;
cin>>d1[4].house_no;
cin>>d1[4].block_no;
cin>>d1[4].city;
cin>>d1[4].state;

 printaddress(d1[0]);
 printaddress(d1[1]);
 printaddress(d1[2]); 
 printaddress(d1[3]);


    return 0;
}
void printaddress(struct address d1){
    cout<<d1.house_no<<d1.block_no<<d1.city<<d1.state<<endl;
    //cout<<d1.block_no;
    //cout<<d1.city;
    //cout<<d1.state;
}

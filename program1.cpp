// find the area of square , rectangle and circle

#include<iostream>
#include<math.h>
using namespace std;

float squarearea(float side);
float circlearea(float radius);
float rectanglearea(float a, float b);
int main(){
  
   float side;
   //float a,b;

   cout<<"enter side of square: "<<endl;
   cin>>side;
   cout<<"square area is "<<squarearea( side)<<endl;

   float radius;
   cout<<"Enter radius:"<<endl;
   cin>>radius;
   cout<<" area of circle is :"<<circlearea(radius)<<endl;

   float a,b;
   cout<<"enter a and b :"<<endl;
   cin>>a>>b;
   cout<<"area of rectangle is :"<<rectanglearea(a,b)<<endl;
   
  return 0;
}

float squarearea(float side){
  return side*side;
}

float circlearea(float radius){
  return 3.14*radius*radius;
}

float rectanglearea(float a, float b){
  return a*b;
}

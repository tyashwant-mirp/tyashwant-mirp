#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
int x1,x2,x3,y1,y2,y3;
float a,b,c;
cout<<"Enter all the x coordinates of the triangle "<<endl;
cin>>x1>>x2>>x3;
cout<<"Enter all the y coordintaes of the triangle"<<endl;
cin>>y1>>y2>>y3;
a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
b=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
c=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
if(a!=b&& b!=c)
cout<<" the triangle is scalene"<<endl;
else if(a==b&& b==c)
cout<<" The triangle is equilateral"<<endl;
else
cout<<"The triangle is isoceles";
}

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int a,b,c,d,x1,y1,x2,y2;
cout<<"Enter the coeffcients of x^2"<<endl;
cin>>a;
cout<<"Enter the coeffcients of x"<<endl;
cin>>b;
cout<<"Enter constant"<<endl;
cin>>c;
d=(b*b)-(4*a*c);
if(d<0)
{x1 = (sqrt(d)-b)/(2*a);
x2 = ((-1*b)/2*a);
cout<<" Imaginary root"<<x1<<"&"<<x2<<endl;
}
else if(d>=0)
{y1 = (sqrt(d)-b)/(2*a);
y2 =(-sqrt(d*-1)-b)/(2*a);
cout<<" Real root "<<y1<<"&"<<y2<<endl;
}}

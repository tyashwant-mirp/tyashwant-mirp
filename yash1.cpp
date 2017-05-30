#include<iostream>
using namespace std;
int main()
{
int a,b,c,d;
cout<<"Enter 4 numbers"<<endl;
cin>>a>>b>>c>>d;
if( (a>b) && (a>c) && (a>d))
{	cout<<a<<" is the largest "<<endl;
if(b>c&&b>d)
    cout<<b<<" is the second largest"<<endl;
else if(c>b&&c>d)
	cout<<c<<" is the second largest"<<endl;
  else if(d>b&&d>c)
	cout<<d<<" is the second largest "<<endl;
}
 
else if ( b>a && b>c && b>d)
   {  cout<<b<<" is the largest "<<endl;
if(a>c&&a>d)
    cout<<a<<" is the second largest"<<endl;
else if(c>a&&c>d)
	cout<<c<<" is the second largest"<<endl;
  else if(d>a&&d>c)
	cout<<d<<" is the second largest "<<endl;
}
else if (c>a && c>b && c>d)
{	cout<<c<<" is the largest "<<endl;
if(b>a&&b>d)
    cout<<b<<" is the second largest"<<endl;
else if(a>b&&a>d)
	cout<<a<<" is the second largest"<<endl;
  else if(d>b&&d>a)
	cout<<d<<" is the second largest "<<endl;
}
else 
  {    cout<<d<<" is the largest "<<endl;
if(b>c&&b>a)
    cout<<b<<" is the second largest"<<endl;
else if(c>b&&c>a)
	cout<<c<<" is the second largest"<<endl;
  else if(a>b&&a>c)
	cout<<a<<" is the second largest "<<endl;
}
}


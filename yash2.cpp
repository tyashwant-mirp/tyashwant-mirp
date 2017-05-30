#include<iostream>
using namespace std;
int main()
{
int a,b,c,marks;

cout<<" Enter the cutoff marks for 'A','B','C' grade respectively for FM:-100"<<endl;
cin>>a>>b>>c;
cout<<" Enter marks"<<endl;
cin>>marks;
if(a>b&& b>c)
cout<<"Cutoffs are valid"<<endl;

if(marks>=a)
cout<<" Your grade is A"<<endl;
else if(marks>=b)
cout<<" Your grade is B"<<endl;
else 
cout<<" Your grade is C"<<endl;;
}




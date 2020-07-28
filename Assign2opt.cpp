//============================================================================
// Name        : Assign2opt.cpp
// Author      : 21411
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class stringop
{
	char a[30],b[30],c[30];
	int n,i,j,k,f=0,t=0;
public:
	int get();
	int length();
	int copy();
	int concatenate();
	int substring();
	int reverse();
	int compare();

};
int main()
{
	stringop s;
	s.get();
	s.length();
	s.copy();
	s.reverse();
	s.compare();

	return 0;
}
int stringop::get()
{
	cout<<"Enter first string="<<endl;
	cin>>a;
	cout<<"First String="<<endl;
	cout<<a<<endl;
	cout<<"Enter second string="<<endl;
		cin>>c;
		cout<<"Second String="<<endl;
		cout<<c<<endl;
	return 0;

}
int stringop::length()
{

for(i=0;a[i]!='\0';i++)
{
	f++;
	//cout<<f;
}

	cout<<"Length of first string="<<endl;
	cout<<f<<endl;

	return 0;
}
int stringop::copy()
{
	for(i=0;i<f;i++)
	{
		b[i]=a[i];
		cout<<b<<endl;
	}
cout<<"Copied string="<<endl;
	cout<<b<<endl;

	return 0;
}
int stringop::reverse()
{
	j=0;
	while(i>0)
	{
		i=i-1;
		b[j]=a[i];
		j=j+1;
	}
	cout<<"Reverse string="<<endl;
	cout<<b<<endl;
	return 0;
}
int stringop::compare()
{

	return 0;
}

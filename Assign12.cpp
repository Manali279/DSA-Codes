//============================================================================
// Name        : Assign12.cpp
// Author      : 21411
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class per
{
	int i,j,c,d,n;
	float a[50];
public:
	int getdata();
	int selectsort();
	int bubblesort();
};
int main() {
	per s;
	s.getdata();
	s.selectsort();
	s.bubblesort();
	return 0;

}
int per::getdata()
{
	cout<<"Enter no. of students="<<endl;
	cin>>n;
	cout<<"Enter percentage="<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	return 0;
}
int per::selectsort()
{cout<<"Select Sorted nos.="<<endl;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
		cout<<a[i]<<endl;
	}

	return 0;
}
int per::bubblesort()
{cout<<"Bubble sorted nos.="<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				d=a[j];
				a[j]=a[j+1];
				a[j+1]=d;
			}

		}
		cout<<a[i]<<endl;
	}
	cout<<"Top 5 scores="<<endl;
	for(i=n-1;i>=(n-6);i--)
	{
		cout<<a[i]<<endl;
	}
	return 0;

}

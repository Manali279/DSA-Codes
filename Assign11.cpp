//============================================================================
// Name        : Assign11.cpp
// Author      : 21411
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class training
{
	int a[50];
	int n,i,j,d,L,U,mid,f,m,x,y;
public:
	int getdata()
	{
		cout<<"How many students attended the training program="<<endl;
		cin>>n;
		cout<<"Enter the roll no. of the students="<<endl;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		return 0;
	}
	int sort()
	{
		cout<<"Sorted list="<<endl;
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
		return 0;
	}
	int binarysearch()
	{
		cout<<"Enter the roll no. to be binary searched in the list of those who attended the training program="<<endl;
		cin>>m;
		L=0;
		U=n-1;
		f=0;
		while(L<=U)
		{
			mid=(L+U)/2;
			if(m==a[mid])
			{
				f=1;
				break;
			}
			else if(m<a[mid])
				U=mid-1;
			else
				L=mid+1;
		}
		if(f==1)
		{
			cout<<"Roll no."<<m<<" attended the program"<<endl;
		}
		else
			cout<<"Roll no."<<m<<" did'nt attend the program"<<endl;
		return 0;
	}
	int linearsearch()
	{
		cout<<"Enter the roll no. to be linear searched in the list of those who attended the training program="<<endl;
				cin>>x;
				for(i=0;i<n;i++)
				{
					if(a[i]==x)
						f=1;
				}
				if(f==1)
							{
								cout<<"Roll no."<<x<<" attended the program"<<endl;
							}
							else
								cout<<"Roll no."<<x<<" did'nt attend the program"<<endl;


	return 0;
	}
	int sentinelsearch()
	{
		cout<<"Enter the roll no. to be sentinel searched in the list of those who attended the training program=="<<endl;
		cin>>y;
		int last = a[n-1];
		a[n-1] = y;
		int i = 0;
		while(a[i]!=y)
		{
		    i++;
		}
		a[n-1] = last;
		if( (i < n-1) || (y == a[n-1]) )
		{
			cout<<"Roll no."<<y<<" attended the program"<<endl;

		}
		else
		{
			cout<<"Roll no."<<y<<"did not attended the program"<<endl;

		}

		return 0;
	}
};
int main()
{
training s;
s.getdata();
s.sort();
s.binarysearch();
s.linearsearch();
s.sentinelsearch();
	return 0;
}

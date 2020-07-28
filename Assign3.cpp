//============================================================================
// Name        : Assign3.cpp
// Author      : 21411
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class sparse
{
	int n,i,j,k,f=0;
	int a[30][30],b[30][30],c[30][30],d[30][30];
public:
	int get();
	int display();
	int check();
	int transpose();
	int add();
};

int main() {
	sparse s;
	s.get();
	s.display();
	s.check();
s.add();
s.transpose();

	return 0;
}
int sparse::get()
{
	cout<<"Enter n="<<endl;
		cin>>n;


		cout<<"Enter 1st matrix="<<endl;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
	}
		cout<<endl;
		cout<<"Enter 2nd matrix="<<endl;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>b[i][j];
			}
	}
		return 0;
}
int sparse::display()
{
	cout<<"First matrix="<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cout<<a[i][j]<<" "<<endl;
	}
	cout<<"Second matrix="<<endl;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				cout<<b[i][j]<<" "<<endl;
		}
		return 0;
}
int sparse::check()
{
	for(i=0;i<n;i++)
{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				f++;
			}
		}
}
		if((f++)>((n*n)/2))

		{
			cout<<"It is a sparse matrix"<<endl;
		}
			else
			{
			cout<<"It is not a sparse matrix"<<endl;
			}
return 0;

}


int sparse::add()
{
	cout<<"Addition of two sparse matrix="<<endl;
	for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(a[i][j]==0)
		{
			c[i][j]=b[i][j];
		}
		if(b[i][j]==0)
				{
					c[i][j]=a[i][j];
				}
		if(a[i][j]==0&&b[i][j]==0)
		{
			c[i][j]=0;
		}
		else
		{
			c[i][j]=a[i][j]+b[i][j];
		}
		cout<<c[i][j]<<" "<<endl;
	}
}
	return 0;
	}
int sparse::transpose()
{
	cout<<"Transpose of 1st matrix="<<endl;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				b[i][j]=a[j][i];
				cout<<b[i][j]<<endl;
			}

		}
		return 0;
}



#include <iostream>
using namespace std;
class matrix
{
	int a[30][30],b[30][30],c[30][30],d[30][30],e[30][30],f[30][30];
	int i,j,k,n;
public:
	int get();
	int add();
	int sub();
	int multiply();
	int transpose();
	int diag();
	int up();
	int saddle();

};
int main()
{
	matrix m;
	m.get();
	m.add();
	m.sub();
    m.multiply();
    m.transpose();
    m.up();
    m.diag();
    m.saddle();
	return 0;
}
int matrix::get()
{
	int i,j,k;
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
int matrix::add()
{
	int i,j;
	cout<<"Addition="<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++){

	c[i][j]=a[i][j]+b[i][j];


	cout<<c[i][j]<<" "<<endl;

		}

	}
	return 0;
}
int matrix::sub()
{
	int i,j;

	cout<<"Subtraction="<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			d[i][j]=a[i][j]-b[i][j];
			cout<<d[i][j]<<" "<<endl;
		}

	}
	cout<<endl;
	return 0;

}
int matrix::multiply()
{
	int i,j,k;

	cout<<"Multiplication="<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
            e[i][j]=0;
			for(k=0;k<n;k++)
			{
				e[i][j]+=a[i][k]*b[k][j];

			}

			cout<<e[i][j]<<endl;

		}

	}
	return 0;
}
int matrix::transpose()
{
	int i,j;
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
int matrix::up()
{
	int i,j;
	if(a[1][0]==0&&a[2][0]==0&&a[2][1]==0)
	{
		cout<<"1st matrix is upper triangular matrix"<<endl;
	}
	else
	{
		cout<<"1st matrix is not a upper triangular matrix"<<endl;

	}
	return 0;

}
int matrix::diag()
{
int i,j,g=0,h=0,l;
cout<<"Sum of diagonal entries="<<endl;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(i==j)
		{
			g=g+a[i][j];

		}
		if(i+j==2)
		{
			h=h+a[i][j];
		}

	}
}


		l=g+h-a[1][1];
		cout<<l<<endl;

return 0;

}

int matrix::saddle()
{int i,j,temp=0,m=0,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
temp=a[i][j];
for(k=0;k<n;k++)
{
	if(temp>a[i][k])
		break;
}
if(k==n)
	m=1;
temp=a[i][j];
for(k=0;k<n;k++)
{
	if(temp<a[k][j])
		break;
}
if(k==n)
{
	if(m==1)
	{
		cout<<"Saddle point="<<a[i][j]<<endl;
		break;
	}
}
		}
	}
	return 0;
}

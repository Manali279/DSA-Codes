//============================================================================
// Name        : Assign1.cpp
// Author      : 21411
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class stud
{
	int n,i,j;
	int marks[30],roll[30],present[30],count,common,best;
public:
	int get();
	int avg();
	int max();
	int min();
	int absent();
	int most();
};
int main()
{
	stud s;
	s.get();
s.avg();
s.max();
s.min();
s.absent();
s.most();

	return 0;
}
int stud::get()
{
	int i;
cout<<"Enter n="<<endl;
cin>>n;
cout<<"Enter your roll no.,marks,present status as (0 for absent and 1 for present)="<<endl;
for(i=0;i<n;i++)
{
	cin>>roll[i]>>marks[i]>>present[i];

}
return 0;
}
int stud::avg()
{
	int i,sum,avg;
	sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+marks[i];
	}
	avg=(sum/n);
	cout<<"Average="<<avg<<endl;

	return 0;
}
int stud::max()
{
	int i,max;
	max=-1;
	for(i=0;i<n;i++)
	{

	if(max<marks[i])
	{
		max=marks[i];

	}
	}
	cout<<"Max. marks="<<max<<endl;
	return 0;

}
int stud::min()
{
	int i,min;
	min=101;
	for(i=0;i<n;i++)
	{
		if(min>marks[i])
		{
			min=marks[i];

		}

	}
	cout<<"Min. marks="<<min<<endl;
	return 0;
}
int stud::absent()
{
	int i,ab;
	ab=0;
	cout<<"Roll no. of absent students are="<<endl;
	for(i=0;i<n;i++)
	{
		if(present[i]==0)
		{
			//ab=ab+1;
			ab++;
			cout<<roll[i]<<endl;
		}


	}
	cout<<"No. of absent students="<<ab<<endl;
	return 0;
}
int stud::most()
{int tempEle,element,tempCount;
	for(i=0;i<n;i++)
{
		tempCount=0;
	tempEle=marks[i];

	for(j=0;j<n;j++)
	{
		if(marks[j]==tempEle)
			tempCount++;

		if(tempCount>count)
		{
			element=tempEle;
			count=tempCount;

		}
	}

}
cout<<"Marks scored by most of the students="<<element<<endl;
return 0;
	}






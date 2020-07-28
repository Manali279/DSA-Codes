//============================================================================
// Name        : Assign10.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class deque{

public:
	int front,rear,a[10],size,b,m,i;

	deque(){
		front=-1;
		rear=-1;
		size=20;
		for(int i=0;i<20;i++)
			a[i]=0;
	}
bool isFull()
{
return(front==0&&rear==size-1);
}
bool isEmpty()
{
return(front==-1);
}
void push_front(){
cout<<"Enter the no. to be added from front in the queue="<<endl;
cin>>b;
if(isFull())
{
cout<<"Dqueue is full!!!"<<endl;
return;
}
if(front==-1)
{
front=0;
rear=0;
}
else if(front==0)
front=size-1;
else
front=front-1;
a[front]=b;
size++;
cout<<a[front]<<" added to the dqueue from front"<<endl;
}
void push_back(){
cout<<"Enter the no. to be added from back in the queue="<<endl;
cin>>m;
if(isFull())
{
cout<<"Dqueue is full!!!"<<endl;
return;
}
if(front==-1)
{
front=0;
rear=0;
}
else if(rear==size-1)
rear=0;
else
rear=rear+1;
a[rear]=m;
size++;
cout<<a[rear]<<" added to the dqueue from back"<<endl;	
	
}
void pop_front(){
if(isEmpty())
cout<<"Dqueue is empty!!!"<<endl;
if(front==rear)
{
front=-1;
rear=-1;
}
else if(front==size-1)
front=0;
else
front=front+1;
size--;
cout<<"Front element deleted"<<endl;
}
void pop_back(){
if(isEmpty())
cout<<"Dqueue is empty!!!"<<endl;
if(front==rear)
{
front=-1;
rear=-1;
}
else if(rear==0)
rear=size-1;
else
rear=rear-1;
size--;
cout<<"Back element deleted"<<endl;

}
void display()
{
for(i=front;i<size;i++)
cout<<a[i]<<endl;
}
void dsize()
{
cout<<"Size of dqueue="<<size<<endl;
}
};

int main() {
	int x,m,ch,c;
deque dq;
do
{
cout<<"Enter your choice(\n1)Add element from front\n2)Add element from back\n3)Delete element from front\n4)Delete element from back\n5)Display deque\n6)Size of dqueue)="<<endl;
cin>>ch;
switch(ch)
{
case 1:
dq.push_front();
break;
case 2:
cin>>m;
dq.push_back();
break;
case 3:
dq.pop_front();
break;
case 4:
dq.pop_back();
break;
case 5:
cout<<"The deque is:"<<endl;
dq.display();
break;
case 6:
dq.dsize();
break;
default:
cout<<"Wrong choice entered!!!"<<endl;
}
cout<<"Do you want to continue(1 for yes and 0 for no)="<<endl;
cin>>c;
}
while(c==1);




	return 0;
}

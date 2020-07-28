//============================================================================
// Name        : Assgn9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class node
{
public:
	string name;
	string age;
	node *next;
	node(){
		name="";
		age="";
		next=NULL;
	}
	void getData(){
		cout<<"Enter employee's name: ";
		cin>>name;
		cout<<"Enter employee's age: ";
		cin>>age;
	}
	void showData(){
		cout<<"Employee's name: "<<name<<endl;
		cout<<"Employee's age: "<<age<<endl;
	}
};

class queue{
public:
	node *head;
	queue(){
		head = NULL;
	}
	void inqueue(node *n){
		if(head == NULL)
		{
			head = n;
		}
		else{
			n->next=head;
			head=n;
		}
	}

	void outqueue(){
		if(head == NULL)
			cout<<"Queue is empty!"<<endl;
		else{
			node *temp=head;
			while(temp->next->next!=NULL){
				temp=temp->next;
			}
			temp->next=NULL;
		}
	}
	bool isempty()
		{
			if(head==NULL)
				return true;
			else
				return false;
		}

	void disp(node *temp)
	{
		if(temp!=NULL){
			disp(temp->next);
			temp->showData();
			cout<<endl;
		}
		else
			return;
	}
};

int main() {
	queue q;
	int c;
	node *emp;
	int ch;
	do{
	cout<<"Do you wish to:\n1) Add a job\n2) Delete a job\n3) Queue display: ";
	cin>>c;
	switch (c){
	case 1:
		emp=new node;
		emp->getData();
		q.inqueue(emp);
		break;
	case 2:
		q.outqueue();
		break;
	case 3:
		q.disp(q.head);
		break;
	default:
		break;
	}
	cout<<"Do you want to continue(1 for yes and 0 for no): ";
	cin>>ch;
	}
	while(ch==1);
	return 0;
}

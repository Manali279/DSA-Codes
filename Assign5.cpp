#include<iostream>
using namespace std;
class binary;
class node
{
	node *prev;
	bool n;
	node *next;
public:
	node()
	{
		prev=next=NULL;
	}
	node(bool b)
	{
		n=b;
	}
	friend class binary;
};

class binary
{
	node *start;

	public:
		binary()
		{
			start=NULL;
		}
		binary operator +(binary n1);
	bool addBegin(bool val)
	{
		node *n=new node(val);
		if(start==NULL)
		{
			start=n;
		}
		else
		{
			n->next=start;
			start->prev=n;
			start=n;
		}
		return true;
	}


void generateBinary(int num)
{
	bool rem;
	node *p;
	rem=num%2;
	start=new node(rem);
	num=num/2;
	while(num!=0)
	{
		rem=num%2;
		num=num/2;
p=new node(rem);
			p->next=start;
			start->prev=p;
			start=p;


	}
}
void displayBinary()
{
	node *t;
	t=start;
	while(t!=NULL)
	{
		cout<<t->n;
		t=t->next;
	}

}
void onesComplement()
{
	node *t;
	t=start;

	while(t!=NULL)
	{
		if(t->n==0)
			t->n=1;
		else
			t->n=0;

		t=t->next;

	}
}

void twoscomplement()
{
	onesComplement();
	bool carry=1;
	node *t;
	t=start;
	while(t->next!=NULL)
	{
		t=t->next;
	}
	while(t!=NULL)
	{
	if(t->n==1&& carry==1)
	{
		t->n=0;
		carry=1;
	}
	else
	if(t->n==0&& carry==1)
	{
		t->n=1;
		carry=0;
	}
	else
	if(carry==0)
	break;

	t=t->prev;
}

}
};

int main()
{
	int num,num1;
	binary n1,n3,n2;
	 cout<<"\nENter Number in decimal form: ";
					cin>>num;
					n1.generateBinary(num);
					cout<<"\nBinary Representation of the number= ";
					n1.displayBinary();
			cout<<"\nOnes Complement of the number= ";
					n1.onesComplement();
					n1.displayBinary();
					cout<<"\nTwos complement of the numbers= ";
					n1.twoscomplement();
					n1.displayBinary();
			 cout<<"\nEnter Two Numbers in decimal form= ";
					cin>>num>>num1;
					n1.generateBinary(num);
					n2.generateBinary(num1);
					n1.displayBinary();
					cout<<" + ";
					n2.displayBinary();
					cout<<"= ";

return 0;
}


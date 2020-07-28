//============================================================================
// Name        : Assign-06.cpp
// Author      : 21411
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class vnode
{
public:
string vdata;
vnode *vnext;
};
class bnode
{
public:
	string bdata;
	bnode *bnext;
};
class se
{
	int s,v,b;
	se *head,*next,*tail,*temp;
	vnode *vhead,*vtail,*vtemp;
	bnode *bhead,*btail,*btemp;
	string name,data;
public:
	se()
	{
		vhead=NULL;
		vtail=NULL;
		bhead=NULL;
		btail=NULL;
		name="xyz";
		head=NULL;

	}
	void input()
	{
		cout<<"Enter the no. of students=";
		cin>>s;
		cout<<endl;
		cout<<"Enter the names of students="<<endl;
		for(int i=0;i<s;i++)
		{
			cin>>name;
			se *t=new se;
			t->data=name;
			t->next=NULL;
			if(head==NULL)
			{
				head=t;
				tail=t;
			}
			else
			{
				tail->next=t;
				tail=tail->next;
			}

		}

	}
	void vinput()
	{
		cout<<"Enter the no. of students who like vanilla=";
		cin>>v;
		cout<<endl;
		cout<<"Enter the names of students who like vanilla="<<endl;
		for(int i=0;i<v;i++)
		{
			cin>>name;
			vnode *temp=new vnode;
			temp->vdata=name;
			temp->vnext=NULL;
			if(vhead==NULL)
			{
				vhead=temp;
				vtail=temp;
			}
			else
			{
				vtail->vnext=temp;
				vtail=vtail->vnext;
			}

		}

	}
	void binput()
	{
		cout<<"Enter the no. of students who like butterscotch=";
		cin>>b;
		cout<<endl;
		cout<<"Enter the names of students who like butterscotch="<<endl;
		for(int i=0;i<b;i++)
		{
			cin>>name;
			bnode *temp=new bnode;
			temp->bdata=name;
			temp->bnext=NULL;
			if(bhead==NULL)
			{
				bhead=temp;
				btail=temp;
			}
			else
			{
				btail->bnext=temp;
				btail=btail->bnext;
			}

		}

	}
	void vdisplay()
	{
		cout<<"Students who like vanilla ice-cream:\n";
		vnode *temp=new vnode;
		temp=vhead;
		while(temp!=NULL)
		{
			cout<<temp->vdata<<" ";
			temp=temp->vnext;
		}
		cout<<endl;
	}
	void bdisplay()
		{
			cout<<"Students who like butterscotch ice-cream:\n";
			bnode *temp=new bnode;
			temp=bhead;
			while(temp!=NULL)
			{
				cout<<temp->bdata<<" ";
				temp=temp->bnext;
			}
			cout<<endl;
		}
void intersect()
{
	cout<<"Students who like both Vanilla and Butterscotch="<<endl;

vtemp=vhead;

btemp=bhead;

	while(vtemp!=NULL)
	{
		while(btemp!=NULL)
		{
			if(vtemp->vdata==btemp->bdata)
			{
				cout<<vtemp->vdata<<" ";

				}

			btemp=btemp->bnext;
		}
		vtemp=vtemp->vnext;
	btemp=bhead;

	}
	cout<<endl;

}
void v_b()
		{
	cout<<"Students who like either vanilla but not butterscotch="<<endl;

	vtemp=vhead;
	while(vtemp!=NULL)
	{
		int f=0;
		btemp=bhead;
		while(btemp!=NULL)
		{
			if(vtemp->vdata==btemp->bdata)
			{
				f=1;
			}
			btemp=btemp->bnext;
		}
		if(f==0)
		{
		cout<<vtemp->vdata<<" ";

		}
		vtemp=vtemp->vnext;
	}
	cout<<endl;


		}
void b_v()
		{
	cout<<"Students who like butterscotch but not vanilla="<<endl;

	btemp=bhead;
	while(btemp!=NULL)
	{
		int f=0;
		vtemp=vhead;
		while(vtemp!=NULL)
		{
			if(btemp->bdata==vtemp->vdata)
			{
				f=1;
			}
			vtemp=vtemp->vnext;
		}
		if(f==0)
		{
		cout<<btemp->bdata<<" ";

		}
		btemp=btemp->bnext;
	}
	cout<<endl;


		}
void uni()
		{
	cout<<"Students who either like vanilla or butterscotch or both="<<endl;
	vtemp=vhead;

	btemp=bhead;

		while(vtemp!=NULL)
		{
			while(btemp!=NULL)
			{
				if(vtemp->vdata==btemp->bdata)
				{
					cout<<vtemp->vdata<<" ";

					}

				btemp=btemp->bnext;
			}
			vtemp=vtemp->vnext;
		btemp=bhead;

		}
		vtemp=vhead;
			while(vtemp!=NULL)
			{
				int f=0;
				btemp=bhead;
				while(btemp!=NULL)
				{
					if(vtemp->vdata==btemp->bdata)
					{
						f=1;
					}
					btemp=btemp->bnext;
				}
				if(f==0)
				{
				cout<<vtemp->vdata<<" ";

				}
				vtemp=vtemp->vnext;
			}
			btemp=bhead;
				while(btemp!=NULL)
				{
					int f=0;
					vtemp=vhead;
					while(vtemp!=NULL)
					{
						if(btemp->bdata==vtemp->vdata)
						{
							f=1;
						}
						vtemp=vtemp->vnext;
					}
					if(f==0)
					{
					cout<<btemp->bdata<<" ";

					}
					btemp=btemp->bnext;
				}
cout<<endl;
		}
void neither()
{
	cout<<"Students who neither like butterscotch nor vanilla are="<<endl;
temp=head;
		while(temp!=NULL)
		{
			int f=0;
			btemp=bhead;
			while(btemp!=NULL)
			{
				if(temp->data==temp->data)
				{
					f=1;
				}
				btemp=btemp->bnext;
			}
			if(f==0)
			{
			cout<<temp->data<<" ";

			}
			temp=temp->next;
		}
		cout<<endl;
		temp=head;
				while(temp!=NULL)
				{
					int f=0;
					vtemp=vhead;
					while(vtemp!=NULL)
					{
						if(temp->data==temp->data)
						{
							f=1;
						}
						vtemp=vtemp->vnext;
					}
					if(f==0)
					{
					cout<<temp->data<<" ";

					}
					temp=temp->next;
				}
				cout<<endl;

}
};
int main() {
se s;
s.input();
s.vinput();
s.binput();
s.vdisplay();
s.bdisplay();
s.intersect();
s.v_b();
s.b_v();
s.uni();
s.neither();
	return 0;
}

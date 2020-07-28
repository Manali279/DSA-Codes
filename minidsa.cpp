#include<iostream>
#include<stdlib.h>
using namespace std;
class bank
{
public:
int accno;
string name;
long int balance;
bank *next;
bank *head;
bank()
{
accno=0;
name="abc";
balance=0;
head=NULL;
}

void push(bank** head_ref, int baccno, string bname, long int bbalance)
	{
	    bank* b = new bank();
	    b->accno = baccno;
	  b->name=bname;
b->balance=bbalance;
	    b->next = (*head_ref);
	  (*head_ref) =b;
	}
void print(bank *node)
	{
cout<<"The record list is as follows:"<<endl;
	    while (node != NULL)
	    {
	        cout<<" "<<node->accno<<" "<<node->name<<" "<<node->balance<<" "<<endl;
	        node = node->next;
	    }
	}
	void deleteacc(bank **head_ref, int position)
	{
	   if (*head_ref == NULL)
	      return;
	   bank* temp = *head_ref;
	    if (position == 0)
	    {
	        *head_ref = temp->next;
	        free(temp);
	        return;
	    }
 for (int i=0; temp!=NULL && i<position-1; i++)
	         temp = temp->next;
 if (temp == NULL || temp->next == NULL)
	         return;
 bank *next = temp->next->next;
 free(temp->next);
 temp->next = next;
	}
void cou(bank *node)
{
	int count=0;
	while(node!=NULL)
	{
		count++;
		node=node->next;
	}
	cout<<count<<endl;
}



};
int main()
{
bank b;
bank *head=NULL;
int ch,n,i,accno,m,d;
string name;
long int balance;
cout<<"BANKING RECORD SYSTEM"<<endl;
cout<<" "<<endl;
do
{
cout<<"Enter your choice:"<<endl;
cout<<"\n1)Create a record list\n2)Add a record\n3)Delete a record\n4)Display the record list as per the entries\n5)Total no. of records"<<endl;
cin>>ch;
cout<<""<<endl;
switch(ch)
{
case 1:
cout<<"Creation of a record list"<<endl;
cout<<"Enter how may records:";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Enter account no.="<<endl;
cin>>accno;
cout<<"Enter name of account holder="<<endl;
cin>>name;
cout<<"Enter balance="<<endl;
cin>>balance;
b.push(&head,accno,name,balance);
}
break;
case 2:
cout<<"Adding a record"<<endl;
cout<<"Enter account no.="<<endl;
cin>>accno;
cout<<"Enter name of account holder="<<endl;
cin>>name;
cout<<"Enter balance="<<endl;
cin>>balance;
b.push(&head,accno,name,balance);
break;
case 3:
b.print(head);
cout<<"Deleting a record"<<endl;
cout<<"Enter the position of the record to be deleted="<<endl;
cin>>m;
b.deleteacc(&head,m-1);
b.print(head);
break;
case 4:
cout<<"Display of the record list as per the entries"<<endl;
b.print(head);
break;
case 5:
cout<<"Total no. of records"<<endl;
b.cou(head);
break;
default:
cout<<"Entered choice is wrong"<<endl;
}
cout<<"Do you want to continue(1 for yes and 0 for no)="<<endl;
cin>>d;
cout<<""<<endl;
}
while(d==1);
return 0;
}






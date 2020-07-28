//============================================================================
// Name        : Assign-04.cpp
// Author      : 21411
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stdlib.h>
using namespace std;
class pinnacle
{
public:
	int prn,count;
	string name;
	pinnacle *next;
	pinnacle *head;
	void push(pinnacle** head_ref, int pprn, string pname)
	{
	    pinnacle* p = new pinnacle();
	    p->prn = pprn;
	  p->name=pname;
	    p->next = (*head_ref);
	  (*head_ref) =p;
	}

	void append(pinnacle** head_ref, int sprn,string sname)
	{

	    pinnacle* s = new pinnacle();

	    pinnacle *last = *head_ref;

	    s->prn = sprn;
	   	  s->name=sname;
	  s->next = NULL;
	  if (*head_ref == NULL)
	    {
	        *head_ref = s;
	        return;
	    }

	    while (last->next != NULL)
	        last = last->next;
	    last->next = s;
	    return;
	}
	void print(pinnacle *node)
	{
	    while (node != NULL)
	    {
	        cout<<" "<<node->prn<<" "<<node->name<<endl;
	        node = node->next;
	    }
	}
	void deletepos(pinnacle **head_ref, int position)
	{
	   if (*head_ref == NULL)
	      return;
	   pinnacle* temp = *head_ref;
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
 pinnacle *next = temp->next->next;
 free(temp->next);
 temp->next = next;
	}
void cou(pinnacle *node)
{
	int count=0;
	while(node!=NULL)
	{
		count++;
		node=node->next;
	}
	cout<<count<<endl;
}
void rev(pinnacle *t)
{
	if(t==NULL)
		return;
	else
	{
		rev(t->next);
		cout<<t->prn<<" "<<t->name<<endl;
	}
}
 void concate(pinnacle *a,pinnacle *b)
  {
      if( a != NULL && b!= NULL )
      {
          if (a->next == NULL)
              a->next = b;
          else
              concate(a->next,b);
      }
      else
      {
          cout << "Either a or b is NULL\n";
      }
  }


};
int main() {
	int pprn,sprn,pos,ch,count;
	string pname,sname;
pinnacle *head=NULL;
pinnacle m;
m.push(&head,1,"a");
m.push(&head,2,"b");
m.push(&head,3,"c");
m.push(&head,4,"d");
m.append(&head,5,"e");
m.append(&head,6,"f");
cout<<"The members are="<<endl;
m.print(head);
cout<<"The no. of members="<<endl;
m.cou(head);
cout<<"Enter the PRN and name of president="<<endl;
cin>>pprn>>pname;
m.push(&head,pprn,pname);
cout<<"The list with President added is as follows="<<endl;
m.print(head);
cout<<"Enter the PRN and name of secretary="<<endl;
cin>>sprn>>sname;
m.append(&head,sprn,sname);
cout<<"The list with Secretary added is as follows="<<endl;
m.print(head);
cout<<"The no. of members including president and secretary="<<endl;
m.cou(head);
cout<<"enter the position of the member to be deleted="<<endl;
cin>>pos;
m.deletepos(&head,pos-1);
cout<<"The element at position "<<pos<<" is deleted="<<endl;
m.print(head);
cout<<"Do you want to delete the president(1 for yes and 0 for no)="<<endl;
cin>>ch;
if(ch==1)
{
	m.deletepos(&head,0);
	cout<<"The list with president deleted="<<endl;
	m.print(head);
}
else
{
	cout<<"President will not be deleted"<<endl;
}
cout<<"The reverse list="<<endl;
m.rev(head);
cout<<"The concatenated list with another list="<<endl;
pinnacle n;
n.push(&head,10,"l");
n.push(&head,11,"m");
n.push(&head,12,"n");
n.push(&head,13,"o");
n.append(&head,14,"p");
n.append(&head,15,"q");
n.print(head);
return 0;
}

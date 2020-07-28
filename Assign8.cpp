#include <iostream>
#include<string.h>
using namespace std;
class i_p
{
	char stack[100];
	int top;
public:
	i_p()
	{
		top=-1;
	}
	int isfull()
	{
		if(top==99)
			return 1;
		else
			return 0;
	}
	int isempty()
	{
		if(top==-1)
			return 1;
		else
			return 0;
	}

int priority(char c)
{
	if(c=='^')
		return 3;
	else if(c=='*'||c=='/')
		return 2;
	else if(c=='+' || c=='-')
		return 1;
	else
		return 0;
}
void push(char a)
{
	if(!isfull())
	{
		top++;
		stack[top]=a;
	}
}
char pop()
{
	char m;
	if(!isempty())
	{
		m=stack[top];
		top--;
		return m;
	}
}
void infix_to_postfix()
{
	string arr;
	int i,len,pre1,pre2;
	cout<<"Enter the Expression to be converted from infix to postfix="<<endl;
	cin>>arr;
	i=0;
	cout<<"The postfix expression="<<endl;

	while(arr[i]!='\0')
	{
		switch(arr[i])
		{
		case '+':
			pre1=priority(arr[i]);
			pre2=priority(stack[top]);
			if(pre1 > pre2)
				push(arr[i]);
			else
			{
				cout<<pop();
				push(arr[i]);
			}

			break;
		case '-':
			pre1=priority(arr[i]);
			pre2=priority(stack[top]);
			if(pre1 > pre2)
				push(arr[i]);
			else
			{
				cout<<pop();
				push(arr[i]);
			}
			break;
		case '*':
			pre1=priority(arr[i]);
			pre2=priority(stack[top]);
			if(pre1 > pre2)
				push(arr[i]);
			else
			{
				cout<<pop();
				push(arr[i]);
			}
			break;
		case '/':
			pre1=priority(arr[i]);
			pre2=priority(stack[top]);
			if(pre1 > pre2)
				push(arr[i]);
			else
			{
				cout<<pop();
				push(arr[i]);
			}
			break;
		case '^':
					pre1=priority(arr[i]);
					pre2=priority(stack[top]);
					if(pre1 > pre2)
						push(arr[i]);
					else
					{
						cout<<pop();
						push(arr[i]);
					}
					break;
		default:
			cout<<arr[i];
			break;
			}
		i++;
	}
	while(top>-1)
	{
		cout<<stack[top];
		top--;
	}
}
};
int main()
{
	i_p a;
a.infix_to_postfix();
	return 0;
}



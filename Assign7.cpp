//============================================================================
// Name        : Assign07.cpp
// Author      : 21411
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<char> a;
		int flag;
		string s;
		int b;
		int i,j;
		cout<<"Enter the expression=";
		cin>>s;
		cout<<endl;
		b=s.length();
		for(i=0;i<b;i++)
		{
			if(s[i]=='{'||s[i]=='('||s[i]=='[')
				a.push(s[i]);
			flag=1;
			if(!a.empty())
			{
			if(s[i]=='}')
			{
				if(a.top()=='{')
			{a.pop();
					continue;
			}
					else
						break;
				}
					if(s[i]==')')
					{
						if(a.top()=='(')
					{a.pop();
							continue;
					}
							else
								break;
						}

							if(s[i]==']')
							{
								if(a.top()=='[')
							{
									a.pop();
									continue;
							}
									else
										break;
								}

							}
}



	if(flag==1&&a.empty())
	{
		cout<<"Stack is well parenthesized"<<endl;
	}
	else
	{
		cout<<"Stack is not well parenthesised"<<endl;
	}

	return 0;
}

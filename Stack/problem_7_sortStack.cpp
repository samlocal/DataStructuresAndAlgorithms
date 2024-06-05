#include <bits/stdc++.h> 

void insertAtRightPosition(stack<int> &stack , int x)
{
	if(stack.empty() ||(!stack.empty() && x>stack.top()))
	{
		stack.push(x);
		return;
	}

	int ele=stack.top();
	stack.pop();
	insertAtRightPosition(stack,x);
	stack.push(ele);
}
void sortStack(stack<int> &stack)
{
	if(stack.empty())
	{
		return;
	}

	int ele=stack.top();
	stack.pop();
	sortStack(stack);

	insertAtRightPosition(stack,ele);
}
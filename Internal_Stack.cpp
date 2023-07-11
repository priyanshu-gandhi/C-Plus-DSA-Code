#include<iostream>
#include<stack> //Library for internal implementation of stack
using namespace std;

int main()
{
	stack<int>st;
	st.push(1);
	st.push(2);
	cout<<"\n"<<st.top();
	st.pop();
	cout<<"\n"<<st.top();
	cout<<st.empty();
	return 0;
}

#include<iostream>
using namespace std;

class stack{
	int *arr;
	int capacity;
	int top=-1;
	
	public:
		stack(int c)
		{
			capacity=c;
			cout<<capacity;
			arr= new int [capacity];
		}
		
		void push(int x)
		{
			if(top==capacity-1)
			{
				cout<<"Overflow conditon\n";
				return;
			}
			top++;
			arr[top]=x;
		}
		
		int pop()
		{
			if(top==-1)
			{
				cout<<"Underflow condition\n";
				return 0;
			}
			top--;
		}
		
		int getTop()
		{
			return arr[top];
		}
		bool isEmopty()
		{// 1 means true and 0 means false
			if(top==-1)
			  return true;
			  else
			   return false;
		}
		
		bool isFull()
		{
			if(top==capacity-1)
			{
				return true;
			}
			else
			    return false;
		}
};




int main()
{
	stack st(5);
	cout<<"\n"<<st.isEmopty();
	st.push(1);
	st.push(2);
	st.push(3);
	cout<<endl;
	cout<<st.getTop();
	cout<<endl;
	st.push(4);
	st.push(5);
	st.push(6);
	cout<<st.getTop();
	cout<<endl;
    st.pop();
    cout<<st.getTop();
    cout<<st.isFull();
	return 0;
}

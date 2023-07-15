#include<iostream>
using namespace std;

int main()
{
	int num,rev=0,r=0,n;
	cout<<"Enter the number";
	cin>>num;
	n=num;
	
	while(num>0)
	{
	r=num%10;
	rev=(rev*10)+r;
	num=num/10;
    }
	
	cout<<rev<<endl;
	
	if(n==rev)
	{
		cout<<"Given no is palindrome number";
	}
	else{
		cout<<"Not a palindrome number";
	}
	
	return 0;
}

#include<iostream>
using namespace std;

int main()
{
	int a[10],n,key,i;
	cout<<"Enter the number of elements\n";
	cin>>n;
	
	cout<<"Enter array elements\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the key to be searched\n";
	cin>>key;
	
	
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			cout<<"Element is present at location "<<i+1;
			break;
		}
	
	}
	if(i>=n)
	{
		cout<<"Entered element is not present\n";
	}
		
	return 0;
}

#include<iostream>
using namespace std;

int main()
{
	int a[],n,key,i,l,h,mid;
	cout<<"Enter the number of elements\n";
	cin>>n;
	
	cout<<"Enter  elements\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the key to be searched\n";
	cin>>key;
	
	mid=(l+h)/2;
	l=0;
	h=n-1;
	
while(l<h){
		if(key==a[mid])
		{
			cout<<"Entered element is present at location "<<mid+1;
			break;
		}
		else if(key>a[mid])
		{
			l=mid+1;
			
		}
		else{
			h=mid-1;
		}
		
			mid=(l+h)/2;
	}
	if(l>=h)
	{
		cout<<"Entered element is not present\n";
	}

	return 0;
}

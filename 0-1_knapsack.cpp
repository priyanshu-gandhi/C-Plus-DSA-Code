#include<iostream>
using namespace std;

int max(int a, int b)
{
    return 	(a>b)?a:b;
}
int knapsack(int n,int W,int wt[],int val[])
{
	int w;
	int k[n+1][W+1];
	for(int i=0;i<=n;i++)
	{
		for(int w=0;w<=W;w++)
		{
            if(i==0 || w==0)
			{
			  k[i][w]=0;	
			}
			else if (wt[i-1]<=w)
			{
				k[i][w]=max(val[i-1]+k[i-1][w-wt[i-1]],k[i-1][w]);
			}
			else{
				k[i][w]=k[i-1][w];
				}
						
		}
	}
	return k[n][W];
}

int main()
{
	int  n,W;
    cout<<"Enter the no of items\n";
    cin>>n;
    
    cout<<"Enter the  value of knapsack\n";
    cin>>W;
    
    int wt[20],val[20];
    cout<<"Enter the weight and profit of items\n";
    for(int i=0;i<n;i++)
    {
    	cin>>wt[i];
    	cin>>val[i];
	}
	
	cout<<"Maximum profit generated is: "<<knapsack(n,W,wt,val);
    
	
	return 0;
}

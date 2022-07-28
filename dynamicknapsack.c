#include<stdio.h>
#include<stdlib.h>

int max(int a, int b)
{
	return (a>b)?a:b;
}
int knapsack(int W, int wt[], int val[], int n)
{
	if(n==0 || W ==0)
	{
		return 0;
	}
	
	if(wt[n-1]>W)
	{
		return knapsack(W,wt,val,n-1);
	}
	else
	{
		max(val[n-1]+knapsack(W-wt[n-1],wt,val,n), knapsack(W,wt,val,n-1));
	}
}
int main()
{
	int n,i;
	
	scanf("%d",&n);
	
	int wt[n],val[n],W;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&wt[i]);
	}
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&val[i]);
	}
	
	scanf("%d",&W);
	
	printf("%d",knapsack(W,wt,val,n));
}

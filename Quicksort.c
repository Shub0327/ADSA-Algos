#include<stdio.h>
#include<stdlib.h>
int swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int partition(int A[], int left, int right)
{
	int pivot = A[left];
	int start = left;
	int end = right;
	
	while(start<end)
	{
		while(A[start]<=pivot)
		{
			start++;
		}
		
		while(A[end]>pivot)
		{
			end--;
		}
		
		if(start<end)
		{
			swap(&A[start], &A[end]);
		}
	}
	swap(&A[left], &A[end]);
	return end;
}
int quicksort(int arr[], int lb, int ub)
{
	int loc;
	if(lb<ub)
	{
		loc = partition(arr,lb,ub);
		quicksort(arr,lb,loc-1);
		quicksort(arr,loc+1,ub);
	}
}
int main()
{
	int n,i;
	
	scanf("%d",&n);
	int A[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	
	quicksort(A,0,n-1);
	
	for(i=0;i<n;i++)
	{
		printf("%d",A[i]);
	}
}

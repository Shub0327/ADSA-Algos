#include<stdio.h>
#include<stdlib.h>


int solution(int *A,int L,int H,int key)
{
	
	if(L<=H)
	{
		int mid = (L+H)/2;
		
		if(A[mid]==key)
		{
			return mid;
		}
		else if(A[mid]<key)
		{
			solution(A,mid+1,H,key);
			
		}
		else
		{
			solution(A,L,mid-1,key);
		}
		
	}
	else
	{
		return -1;
	}
}

int main()
{
	int *A, n,i, key;
	printf("Enter the size:");
	scanf("%d", &n);
	
	A = (int *)malloc(sizeof(int)*n);
	printf("Enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter the element to be searched:");
	scanf("%d",&key);
	printf("The Index of the searched element is :");
	printf("%d", solution(A,0,n,key));
}

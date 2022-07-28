#include<stdio.h>
#include<stdlib.h>
void selectionsort(int arr[], int n)
{
	int min,j,i;
	
	for(i=0;i<n-1;i++)
	{
		min= i;
		
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		
		int temp = arr[min];
		arr[min]= arr[i];
		arr[i] = temp;
	}
}

int main()
{
	
	int *a,n,i;
	
	scanf("%d", &n);
	
	a  = (int *)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	selectionsort(a,n);
	
	for(i=0;i<n;i++)
	{
		printf("%d", a[i]);
	}
	
	return 0;
}


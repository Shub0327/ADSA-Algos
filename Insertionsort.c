#include<stdio.h>
#include<stdlib.h>

void solution(int *a, int n)
{
	
	int key, i,j;
	
	for(i=1;i<n;i++)
	{
		key = a[i];
		j = i-1;
		
		while(j>=0 && key<a[j])
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
}
int main()
{
	int *a, n,i,j,k;
	
	scanf("%d", &n);
	a = (int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	
	solution(a,n);
	
	for(i=0;i<n;i++)
	{
		printf("%d", a[i]);
	}
	
	return 0;
}

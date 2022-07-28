#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
 
 
// Driver program to test above functions
int main()
{
    int *arr;
    
    int n,i;
    scanf("%d",&n);
    
    arr = (int *)malloc(sizeof(int)*n);
    
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    for(i=0;i<n;i++)
    {
    	printf("%d",arr[i]);
	}
    return 0;
}

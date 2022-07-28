#include<stdio.h>
#include<stdlib.h>

int merge(int arr[], int l, int m, int r)
{

    int i,j,k;
    int n1=  m-l+1;
    int n2 = r-m;
    
    int L[n1], R[n2];
    
    for(i=0;i<n1;i++)
    {
        L[i] = arr[l+i];
        
    }
    
    for(j=0;j<n2;j++)
    {
        R[j] = arr[m+1+j];
    }
    
    i=j=0;
    
    k=l;
    
    while(i<n1 && j<n2)
    {
        
        if(L[i]<=R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else 
        {
            arr[k] = R[j];
            j++;
        }
        
        k++;
    
    }
    
    
    while(i<n1)
    {
        arr[k] = L[i];
        i++;
        k++;   
    }
    
    while(j<n2)
    {
        arr[k]= R[j];
        j++;
        k++;
    
    }

}

int mergeSort(int arr[], int l , int r)
{
    if(l<r)
    {
        int m = l+(r-l)/2;
        
        mergeSort(arr,l,m);
        mergeSort(arr, m+1,r);
        
        merge(arr,l,m,r);
    
    
    }
}


//Your program will be evaluated by this main method and several test cases.
int main()
{
    int *A,N,i;
    printf("Enter size:");
    scanf("%d",&N);
    A = (int *)malloc(sizeof(int)*N);
    printf("Enter elements:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    mergeSort(A,0,N-1);
    
    for(i=0;i<N;i++){
       printf("%d ", A[i]);
    }
    
    free(A);
}    


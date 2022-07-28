#include<stdio.h>
#include<stdlib.h>

int min(int a , int b)
{
	return (a<b)?a:b;
}
int multistage(int **graph,int V)
{
	int *dist = (int *)malloc(V * sizeof(int));
	
	dist[V-1] = 0;
	
	for(int i=V-2;i>=0;i--)
	{
		
		dist[i] = INT_MAX;
		
		for(int j=i+1;j<V;j++)
		{
			if(graph[i][j]!=0 && graph[i][j]!=99999)
			{
				dist[i] = min(dist[i],graph[i][j]+dist[j]);
			}
		}
	}
	
}
int main()
{
	int vertices,i,j,**Graph;
	
	scanf("%d",&vertices);
	
	Graph = (int **)malloc(vertices * sizeof(int *));
	
	for(i=0;i<vertices;i++)
	{
		Graph[i] = (int *)malloc(vertices * sizeof(int));
	}
	
	for(i=0;i<vertices;i++)
	{
		for(j=0;j<vertices;j++)
		{
			scanf("%d",&Graph[i][j]);
		}
	}
	
	printf("%d",multistage(Graph,vertices));
	
	free(Graph);
}

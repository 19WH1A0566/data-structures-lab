#include<stdio.h>
int source, V, E, time, visited[20], G[20][20];
void DFS(int i)
{
	int j;
	visited[i]= 1;
	printf("%d -> ", i+1);
	for(j=0;j<V;j++)
	{
		if(G[i][j] == 1 && visited[j] == 0)
		DFS(j);
	}
}

int main()
{
	int i,j,v1, v2;
	printf("\t\t\tGraphs \n");
	printf("Enter the number of edges: \n");
	scanf("%d", &E);
	printf("Enter number 0f vertices: \n");
	scanf("%d", &V);
	for(i=0;i<V;i++)
		for(j=0;j<V;j++)
			G[i][j] = 0;
	for(i=0; i<E;i++)
	{
	printf("Enter edge (V1 V2) format:  ");
	scanf("%d %d", &v1, &v2);
	G[v1-1][v2-1] = 1;
	}
	for(i = 0; i<V;i++)
	{
		for(j=0;j<V;j++)
			printf("%d\t", G[i][j]);
		printf("\n");
	}
	printf("Enter the source: ");
	scanf("%d", &source);
		DFS(source-1);
	return 0;
}
#include<stdio.h>
int G[20][20],q[20],visited[20],n,front=1,rear=0;
void bfs(int v)
{
	int i;
	visited[v]=1;
	for(i=1;i<=n;i++)
	  if(G[v][i] && !visited[i])
	   q[++rear]=i;
	   if(front <= rear)
	    bfs(q[front++]);
}
int main()
{
	int v,i,j;
	printf("\n Enter the number of vertices: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		q[i]=0;
		visited[i]=0;
	}
	printf("\n Enter graph data in matrix form: \n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&G[i][j]);
	printf("\n Enter the starting vertex:");
	scanf("%d",&v);
	bfs(v);
	printf("\n The nodes which are reachable are:\n");
	for(i=1;i<=n;i++)
		if(visited[i])
			printf("%d\t",i);
		else
			printf("\n %d is not reachable",i);
	return 0;
}
C:\TDM-GCC-64\dslab>gcc dfs.c -o dfs

C:\TDM-GCC-64\dslab>dfs
                        Graphs
Enter the number of edges:
12
Enter number 0f vertices:
5
Enter edge (V1 V2) format:  1 2
Enter edge (V1 V2) format:  2 1
Enter edge (V1 V2) format:  1 3
Enter edge (V1 V2) format:  3 1
Enter edge (V1 V2) format:  1 4
Enter edge (V1 V2) format:  4 1
Enter edge (V1 V2) format:  2 3
Enter edge (V1 V2) format:  3 2
Enter edge (V1 V2) format:  4 5
Enter edge (V1 V2) format:  5 4
Enter edge (V1 V2) format:  3 5
Enter edge (V1 V2) format:  5 3
0       1       1       1       0
1       0       1       0       0
1       1       0       0       1
1       0       0       0       1
0       0       1       1       0
Enter the source: 1
1 -> 2 -> 3 -> 5 -> 4 ->
C:\TDM-GCC-64\dslab>gcc bfs.c -o bfs

C:\TDM-GCC-64\dslab>bfs

 Enter the number of vertices: 4

 Enter graph data in matrix form:
0 1 0 1
1 0 1 1
0 1 0 1
1 1 1 0

 Enter the starting vertex:1

 The nodes which are reachable are:
1       2       3       4
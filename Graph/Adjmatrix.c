// Adjancency Matrix representation of Graph

#include <stdio.h>
#include <stdlib.h> 
// declaring the structure of the graph
struct Graph{
	int V;
	int E;
	int **Adj;
	// since we need a 2dimensional matrix **Adj
	// V stands of Vertex E for Edges
};

struct Graph* getGraph(){
	int i, l, k, u, v;
	struct Graph* G = (struct Graph*)malloc(sizeof(struct Graph));
	// above syntax is similar Graph *G = new Graph();
	if(!G){
		printf("Graph not genrated\n");
		return ;
	}
	printf("enter the number of vertex and edges of the graph\n");
	scanf("%d%d", &G->V, &G->E);
	printf("the graph you declared has vertices: %d , edges: %d", G->V, G->E);
	
	
	G->Adj = (int**)malloc(sizeof(G->V * G->V));
	//since the we need a matrix of v*v
	// we are not type casting the G->Adj as we did already for the graph
	// Adj is only a instance of the graph
	
	// initializing all the edges to zeros
	for(k = 0; k < G->V ; k++){
		for(l = 0; l < G->V ; l++)
		{
			G->Adj[k][l] = 0;
			G->Adj[l][k] = 0;
		}
}
	printf("Enter the nodes");
	while((G->E)--){
		scanf("%d%d",&u, &v);
		// since we are assuming a bi directional graph
		G->Adj[u][v] = 1;
		G->Adj[v][u] = 1;
	}
	
	
	return G;
}

int main(){
	struct Graph* graph = getGraph();
	
}
// we most frequently will use adj list due to  its complixity

#include<bits/stdc++.h>
using namespace std;
//here in github
class Edge{
public:
	int src,dest,weight;
};

class Graph
{
public:
	int V,E;
	Edge *edge;
};

Graph *createGraph(int V,int E){
	Graph *graph=new Graph;
	graph->V=V;
	graph->E=E;
	graph->edge=new Edge[E];
	return graph;
}

class subset{
public:
	int parent,rank;
};

int find(subset subsets[],int i){
	if(subsets[i].parent != i){
		subsets[i].parent=find(subsets,subsets[i].parent);
	}
	return subsets[i].parent;
}

void Union(subset subsets[],int x , int y){
	int xroot = find(subsets,x);
	int yroot = find(subsets,y);
	if(subsets[xroot].rank > subsets[yroot].rank){
		subsets[yroot].parent = xroot;
	}
	else if(subsets[xroot].rank < subsets[yroot].rank){
		subsets[xroot].parent= yroot;
	}
	else{
		subsets[yroot].parent = xroot;
		subsets[xroot].rank++;
	}
}

int comp(const void *a , const void *b){
	Edge *a1 = (Edge *)a;
	Edge *b1= (Edge *)b;
	return a1->weight > b1->weight;
	
}


int mst(Graph *graph){
	int V=graph->V;
	Edge result[V];
	int i=0;
	int e=0;
	qsort(graph->edge,graph->E ,sizeof(graph->edge[0]),comp);
	subset *subsets=new subset[V * sizeof(subset)];
	for(int v=0;v<V;++v){
		subsets[v].parent=v;
		subsets[v].rank=0;
	}
	while(i < graph->E && e < V-1){
		Edge nxtedg = graph->edge[i++];
		int x=find(subsets,nxtedg.src);
		int y=find(subsets,nxtedg.dest);
		if(x!=y){
			result[e++]=nxtedg;
			Union(subsets,x,y);

		}
	}
	for(int j=0;j<e;++j){
		cout<<result[j].src<<" "<<result[j].dest<<" "<<result[j].weight<<endl;
	}
}

int main(){
	int V = 4; // Number of vertices in graph  
    int E = 5; // Number of edges in graph  
    Graph* graph = createGraph(V, E);  
  
  
    // add edge 0-1  
    graph->edge[0].src = 0;  
    graph->edge[0].dest = 1;  
    graph->edge[0].weight = 10;  
  
    // add edge 0-2  
    graph->edge[1].src = 0;  
    graph->edge[1].dest = 2;  
    graph->edge[1].weight = 6;  
  
    // add edge 0-3  
    graph->edge[2].src = 0;  
    graph->edge[2].dest = 3;  
    graph->edge[2].weight = 5;  
  
    // add edge 1-3  
    graph->edge[3].src = 1;  
    graph->edge[3].dest = 3;  
    graph->edge[3].weight = 15;  
  
    // add edge 2-3  
    graph->edge[4].src = 2;  
    graph->edge[4].dest = 3;  
    graph->edge[4].weight = 4;  
  
    mst(graph);  
  
    return 0;  
}



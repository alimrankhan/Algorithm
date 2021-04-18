#include<bits/stdc++.h>
using namespace std;

class Graph{
	int v;
	vector<int> *adj;

public:
	Graph(int v){
		this->v=v;
		adj=new vector<int> [v];

	}
	void addEdge(int u,int v);
	void BFS(int s);
};
void Graph::addEdge(int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);//un-directed
}

void Graph::BFS(int s){
	bool visited[v];
	for(int i=0;i<v;i++) visited[i]=false;
	queue <int> q;
	vector<int>res;
	int curv = s;
	visited[s]=true;
	q.push(s);
	
	while(!q.empty()){
		curv=q.front();
		q.pop();
		res.push_back(curv);
		for(auto i=adj[curv].begin();i<adj[curv].end();i++){
			if(visited[*i]==false){
				visited[*i]=true;
				q.push(*i);
			}

		}
	}
	for(auto i=res.begin();i<res.end();i++){
		cout<<*i<<endl;
	}
}

int main(){
	Graph dg(3); 
    dg.addEdge(0, 1); 
    dg.addEdge(0, 2); 
    dg.addEdge(1, 2); 
    
    dg.BFS(0);

}
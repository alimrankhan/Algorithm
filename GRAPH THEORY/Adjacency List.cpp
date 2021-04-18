#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,e,c;
	cin>>n>>e;
	vector <int> edge[e+1];
	vector<int> cost[e+1];
	for(int i=0;i<e;i++){
		int x,y;
		cin>>x>>y;
		edge[x].push_back(y);
		edge[y].push_back(x);
		cost[x].push_back(1); //extra
		cost[y].push_back(1);
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<edge[i].size();j++){
			cout<<edge[i][j]<<"\t";
		}
		cout<<endl;
	}
}
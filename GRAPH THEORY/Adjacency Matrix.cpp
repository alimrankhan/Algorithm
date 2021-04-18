#include<bits/stdc++.h>
using namespace std;

int main()
{
	int v;
	cin>>v;
	int matrix[v][v];
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			cin>>matrix[i][j];
		}
	}

	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl;
	}

	return 0;
}
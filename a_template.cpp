#include<bits/stdc++.h>
using namespace std;

struct Node{
	int cost, w;
	Node(int a, int b){
		cost=a;
		w=b;
	}
};
bool aaa(Node A, Node B){
	return A.cost>B.cost;
}
int main(){
	vector <Node> v;
	v.push_back(Node(3,2));
	v.push_back(Node(1,4));
	for(auto i= v.begin();i<v.end();i++)
		cout<<((*(i)).cost)<<"\t" <<((*(i)).w)<<endl;
	sort(v.begin(),v.end(),aaa);
	for(auto i= v.begin();i<v.end();i++)
		cout<<((*(i)).cost)<<"\t" <<((*(i)).w)<<endl;
	
	return 0;
}

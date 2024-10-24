#include<bits/stdc++.h>
using namespace std;

class quick_find
{
	public:
		int n; //total number of nodes
		int *id=  (int*) malloc(sizeof(int));
		quick_find(int num){  //constructor
			cout<<"quick_find algo"<<endl;
			n= num;
			id= new int[n];
			for(int i=0;i<n;i++){
				id[i]=i;
			}
			
		}
		
		bool find(int p, int q)
		{
			return id[p]==id[q];
		}
		
		void unio(int p, int q)
		{
			int proot= id[p];
			int qroot= id[q];
			for(int i=0;i<n;i++)
			{
				if (id[i]==qroot)
					id[i]= proot;
			}
		}
		void disp()
		{
			cout<<"in disp"<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<id[i]<<endl;
			}
			
		}

};

class quick_union
{
	public:
	
	int n;
	int *parents;
	
	quick_union(int num){
		cout<<"quick_unio algo"<<endl;
		n= num;
		parents= new int[n];
		for (int i=0; i<n; i++){
			parents[i]=i;
		}
	}
	int root(int x){
		if (parents[x]==x)
		return x;
		return root(parents[x]);
	}
	bool find(int p, int q){
		int proot= root(p);
		int qroot= root(q);
		return proot==qroot;
	}
	
	void unio(int p, int q){
		parents[q]= p;
	}
	
	void disp(){
		for(int i=0;i<n;i++){
			cout<<parents[i]<<endl;
		}
	}
	
	

};
int main()
{
	cout<<"Union Find Algorithm"<<endl;
	quick_find *obj1= new quick_find(3);
	obj1->disp();
	obj1->unio(0,1);
	cout<<obj1->find(1,2)<<endl;
	cout<<obj1->find(1,0)<<endl;
	obj1->disp();
	
	quick_union *obj2= new quick_union(4);
	obj2->disp();
	obj2->unio(0,1);
	cout<<obj2->find(1,0)<<endl;
	cout<<obj2->root(1)<<endl;
}

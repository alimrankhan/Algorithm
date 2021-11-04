#include<bits/stdc++.h> //template //test
using namespace std;
#define ll long long
int num[100];
int used[100];
void test();
int main()
{	test();	return 0;	}

void permutation(int n, int at){
	if(at== n+1){
		for(int i=1;i<=n;i++){
			cout<<num[i];
		}
		cout<<endl;
	}
	else{
		for(int i=1;i<=n;i++){
			if(!used[i]){
				used[i]=1;
				num[at]=i;
				permutation(n,  at+1);
				used[i]=0;
			}
		}
	}
	
}
void test(){
	int n;
	cin>>n;
	for(int i=0;i<=n;i++) used[i]=0;
	permutation(n, 1);
	
}

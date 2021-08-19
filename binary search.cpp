//binary search
#include<bits/stdc++.h>
using namespace std;

void bs(int arr[], int lo, int hi, int x){
	if(lo>hi) return;
	int mid= (lo+hi)/2;
	if(arr[mid] == x)
		cout<<mid+1<<endl;
	if(arr[mid] ==x) return;	//extraline for check and stop :)
	if(x>arr[mid])	bs(arr, mid+1, hi,x);
	else	bs(arr, lo, mid-1,x);
}

int main(){
	int arr[]={1,2,3,4,5,6,7};
	int len= sizeof(arr)/sizeof(arr[0]);
	int x;
	for(x=1;x<=7;x++)
	bs(arr, 0, len-1, x);

	return 0;
}


//mergesort //divide and conquer //O(nlogn)
#include<bits/stdc++.h>
using namespace std;
int temp[1<<10];
void mergesort(int arr[], int lo, int hi){
	if(lo==hi) return;
	int mid= (lo+hi)/2;
	
	mergesort(arr, lo, mid);
	mergesort(arr, mid+1, hi);
	
	//merging
	int i,j,k;
	//int temp[6];
	for(i=lo,j=mid+1, k=lo;k<=hi; k++){
		if(i==(mid+1)) temp[k]= arr[j++];
		else if(j==(hi+1)) temp[k]= arr[i++];
		else if(arr[i]<arr[j]) temp[k]= arr[i++];
		else temp[k]= arr[j++];
	}
	for(i=0;i<=hi;i++) arr[i]=temp[i];
}

void display(int arr[], int len){
	for(int i=0;i<len;i++) cout<<arr[i]<<"\t";
	cout<<endl;
}

int main(){
	int arr[]={6,1,9,3,-1,7,2};
	int len= sizeof(arr)/sizeof(arr[0]);
	display(arr, len);
	mergesort(arr, 0, len-1);
	display(arr, len);
	return 0;
}

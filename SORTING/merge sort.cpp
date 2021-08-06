//mergesort //divide and conquer //O(nlogn)
#include<bits/stdc++.h>
using namespace std;

void mergesort(int arr[], int lo, int hi){
	if(lo==hi) return;
	int mid= (lo+hi)/2;
	
	mergesort(arr, lo, mid);
	mergesort(arr, mid+1, hi);
	
	//merging
	int i,j,k;
	int len= 4;
	int temp[len];
	for(i=lo,j=mid+1, k=lo, k<len, k++){
		if(i==(mid+1)) temp[k]= arr[j++];
		else if(j==(hi+1)) temp[k]= arr[i++];
		else if(arr[i]<arr[j]) temp[k]= arr[i++];
		else temp[k]= arr[j++];
	}
	for(i=0;i<len;i++) arr[i]=temp[i];
}

void display(int arr[], int len){
	
}

int main(){
	int arr[]={6,3,7,2};
	
	return 0;
}

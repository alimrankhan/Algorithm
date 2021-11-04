#include<bits/stdc++.h>
using namespace std;

int left_child(int arr[], int i){
	return arr[2*i];
}

int right_child(int arr[], int i){
	return arr[2*i + 1];
}

int parent(int arr[], int i){
	return arr[i/2];
}

int max3(int a, int b, int c){
	return max(a,max(b,c));
}

void max_heapify(int arr[], int len){
	int i;
	for(i=len/2;i>0;i--){
		
	}
}

void build_max_heapify(int arr[], int len){
	
}

void sort(int arr[], int len){
	printf("HeapSort\n");
}

void insert(int arr[], int len){
	
}

void del(int arr[], int len){
	printf("delete\n");
}

int main(){
	int arr[]={0,4,32,8,13,2};
	int len(sizeof(arr)/sizeof(arr[0]));
	printf("Length: %d\n", len);
	del(arr, len);
	sort(arr, len);
	return 0;
}

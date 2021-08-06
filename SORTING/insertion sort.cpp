// insertion sort
#include<bits/stdc++.h>
using namespace std;

void display(int *, int);
void insertionsort(int arr[],int len){
	int i, j;
	for(i=1;i<len;i++){
		j=i;
		while(j>0 && arr[j]<arr[j-1]){
			swap(arr[j-1], arr[j]);
			j--;
		}
		
	}
	
}

void display(int arr[], int len){
	for(int i=0;i<len;i++) cout<<arr[i]<<"\t";
	cout<<endl;
}
int main(){
	int arr[]={3,2,1,6,7};
	int len= sizeof(arr)/sizeof(arr[0]);
	insertionsort(arr, len);
	display(arr, len);
}

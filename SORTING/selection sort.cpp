// selection sort

#include<bits/stdc++.h>
using namespace std;

void display(int *, int);
void selectionsort(int arr[],int len){
	int i, min, j;
	for(i=0;i<len-1;i++){
		min= i;
		for(j=i+1; j<len; j++){
			if(arr[j]<arr[min]){
				min= j;
			}
		}
		swap(arr[i], arr[min]);
	}
	
}

void display(int arr[], int len){
	for(int i=0;i<len;i++) cout<<arr[i]<<"\t";
	cout<<endl;
}
int main(){
	int arr[]={3,2,1,-4,6,7};
	int len= sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr, len);
	display(arr, len);
}

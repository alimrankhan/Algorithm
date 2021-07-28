#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int len){
	for(int i=0;i<len;i++) cout<<arr[i]<<"\t";
	cout<<endl<<endl;
}

int partition(int arr[], int start, int end){
	int pindex;
	int pivot;
	pivot= arr[end];
	pindex= start;
	int i;
	for(i=start;i<end;i++){
		if(arr[i]<=pivot){             //3,6,9,2,5,pindex=0
			swap(arr[i],arr[pindex]); //i=0,pindex=0,yes -> 3,6,9,2,5
									  //i=1,pindex=1,no ->3,6,9,2,5
									  //i=2,pindex=1,no ->3,6,9,2,5
									  //i=3,pindex=1,yes ->3,2,9,6,5
									  //i=4,pindex=2
									  //endforloop
									  //swap(arr[pindex],arr[end] ->3,2,5,6,9
			pindex++;
		}
	}
	swap(arr[pindex],arr[end]);
	return pindex;
}

void quicksort(int arr[], int start, int end){
	int pindex;
	if(start<end){
		pindex= partition(arr, start, end);
		quicksort(arr, start, pindex-1);
		quicksort(arr, pindex+1, end);
	}
}
int main(){
	int arr[]={3,6,9,2,5};
	cout<<"before quicksort: ";
	display(arr,5);
	quicksort(arr,0,4);
	cout<<"after quicksort:  ";
	display(arr,5);
	return 0;
}

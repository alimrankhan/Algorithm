// bubblesort
 #include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int len){
	//int len= sizeof(arr)/sizeof(arr[0]);
	int i,j;
	for(i=0;i<len;i++){
		for(j=0;j<len-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
void display(int arr[], int len){
	for(int i=0;i<len;i++) cout<<arr[i]<<endl;
}
int main(){
	int arr[]={3,2,1,6,7};
	int len= sizeof(arr)/sizeof(arr[1]);
	display(arr, len);
	bubblesort(arr,len);
	display(arr, len);
	
}

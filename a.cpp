// only for testing purpose 
#include<bits/stdc++.h>
using namespace std;

class cls{
	public:
	 int age;
	public:int *arr;
	cls(int agee){
		age= agee;
		arr= new int[agee] ;
		for(int i=0;i<age;i++){
			arr[i]= i;
		}
		
	}
	int *func (){
		int *id= new int[10];
		return id;
	}
	void disp(){
		cout<<*(arr+14)<<endl;
		for(int i=0 ;i<33;i++)
			cout<<arr[i]<<endl;
	}
};
int main()
{
	cls *obj= new cls(20);
	//cout<<obj->age;
		obj->disp();
		cout<<endl<<obj->arr[0]<<endl;
}

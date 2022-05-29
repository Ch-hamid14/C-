#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a[5];
	int arr_length=sizeof(a)/sizeof(a[0]);
	cout<<"Enter elements in Array"<<endl;
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	
}

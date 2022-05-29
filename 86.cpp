#include<iostream>
using namespace std;

int main(){
	int a[5]={1,2,3,4,5},temp;
	cout<<"The array is"<<endl;
	for(int i=0;i<5;i++){
	cout<<a[i]<<endl;
	}
	temp=a[0];
	a[0]=a[4];
	a[4]=temp;
	cout<<"The Swaping of first and last element is : "<<a[0]<<" "<<a[4];
	
}

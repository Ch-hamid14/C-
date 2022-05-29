#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	int size,temp;
	int a[size];
	cout<<"Enter a size of Array : ";
	cin>>size;
	cout<<endl;
	cout<<"Enter the element in array"<<endl;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	for(int i=0;i<size;i++){
		temp=a[0];
		a[0]=a[size-1];
		a[size-1]=temp;
	}
	cout<<"Array After swaping first and last element"<<endl;
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
}

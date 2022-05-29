#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a[5],mid;
	cout<<"Enter the element in Array : "<<endl;
	for(int i=0;i<5;i++){
		cin>>a[i];
		mid=a[a[i]/2];
	}
	cout<<"The new Array is"<<endl;
	for(int i=mid;i<5;i++){
		cout<<a[i]<<" ";
	}
}

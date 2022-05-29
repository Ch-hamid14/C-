#include<iostream>
using namespace std;

int main(){
	int arr1[50],arr2[50],count;
	int j,i,temp;
	cout<<"Enter the size to how many numbers You want to enter : ";
	cin>>count;
	for( i=0;i<count;i++){
		cout<<"Enter number : ";
		cin>>arr1[i];
	}
	for(i=0;i<count;i++){
		arr2[i]=arr1[count-i-1];
	}
	cout<<"The reversed array is"<<endl;
	for( i=0;i<count;i++){
		cout<<arr2[i]<<endl;
	}
}

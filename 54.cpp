#include<iostream>
using namespace std;
int main(){
	int a[50],i,num,pos,total;
	cout<<"Enter the size the array of array : ";
	cin>>total;
	for( i=0;i<total;i++)
		cin>>a[i];
	cout<<"Enter element : ";
	cin>>num;
	cout<<"What position : ";
	cin>>pos;
	for(i=total;i>=pos;i--){
		a[i]=a[i-1];
		a[i]=num;
		total++;
	}
	for(int i=0;i<total;i++){
		cout<<a[i]<<" ";
		cout<<endl;
	}
}

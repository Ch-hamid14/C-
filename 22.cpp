#include<iostream>
using namespace std;
main(){
	int num,temp,count=0;
	cout<<"Enter a number : ";
	cin>>num;
	temp=num;
	while(temp!=0){
		count++;
		temp=temp/10;
	}
	cout<<"The digits are : "<<count;
}

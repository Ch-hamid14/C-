#include<iostream>
using namespace std;
main(){
	int num,num1,num2,max;
	cout<<"Enter first number : ";
	cin>>num;
	cout<<"Enter second number : ";
	cin>>num1;
	cout<<"Enter third number : ";
	cin>>num2;
	max=num;
	if(max<=num1){
		cout<<"The maximum number is : "<<num1;
	}
	else if(max<=num2){
		cout<<"The maximum number is : "<<num2;
	}
	else
		cout<<"The maximum number is : "<<num;
}

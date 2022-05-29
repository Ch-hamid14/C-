#include<iostream>
using namespace std;
main(){
	int num,num1,hcf,temp;
	cout<<"Enter first number : ";
	cin>>num;
	cout<<"Enter second number : ";
	cin>>num1;
/*	if(num1>num){
		temp=num1;
		num1=num;
		num=temp;
	}*/
	for(int i=1;i<num1;i++){
		if(num%i==0 &&num1%i==0){
			hcf=i;
		}
	}
	cout<<"Hcf is : "<<hcf;
}

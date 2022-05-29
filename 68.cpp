#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"Enter a number : ";
	cin>>num1;
	cout<<"Enter a number : ";
	cin>>num2;
	if(num1>num2){
		if(num1>=20 && num1<=30){
			cout<<num1<<"Number is greater and in range Return 0";
			return 0;
		}
	}
	else if(num1<num2){
		if(num2>=20 && num2<=30){
			cout<<num2<<"Number is greater and in range";
		}
	}
	else if(num1==num2){
		cout<<"The numbers are equal";
	}
	else{
		cout<<"Wrong input";
	}
}

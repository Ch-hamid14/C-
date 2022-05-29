#include<iostream>
using namespace std;
int main(){
	int num1,num2,sum;
	cout<<"Enter a first number : ";
	cin>>num1;
	cout<<"Enter a second number : ";
	cin>>num2;
	sum=num1+num2;
	if(num1==num2){
		cout<<"The sum of two integers are same then tripple sum is : "<<sum+sum+sum;
	}
	else{
		cout<<"The sum is : "<<sum;
	}
}

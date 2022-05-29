#include<iostream>
using namespace std;
int main(){
	int num1,num2,sum;
	cout<<"Enter a first number : ";
	cin>>num1;
	cout<<"Enter a second number : ";
	cin>>num2;
	sum=num1+num2;
	if(num1==30 || num2==30){
		cout<<"True bcz number is = to 30";
	}
	else if(sum==30){
		cout<<"True\t bcz the sum = to ";
	}
	else{
		cout<<"The sum is : "<<sum;
	}
}

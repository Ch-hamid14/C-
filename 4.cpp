#include<iostream>
using namespace std;
main(){
	int num1,num2,num3,sum;
	float avg;
	cout<<"Enter a first number : ";
	cin>>num1;
	cout<<"Enter a second number : ";
	cin>>num2;
	cout<<"Enter a third number : ";
	cin>>num3;
	sum=num1+num2+num3;
	cout<<"The sum is : "<<sum<<endl;
	avg=sum/3;
	cout<<"The average of the three numbers is : "<<avg;
}

#include<iostream>
#include<conio.h>
using namespace std;

int pointer(){
	float num1,num2,choice;
	float *p1=&num1; float *p2=&num2;
	cout<<"Enter a first number : ";
	cin>>num1;
	cout<<"Enter a Second number : ";
	cin>>num2;
	cout<<endl;
	cout<<"The Adress of A is : "<<&num1<<endl;
	cout<<"The Adress of B is : "<<&num2<<endl;
	cout<<endl;
	cout<<"Enter 1 for sum"<<endl;
	cout<<"Enter 2 for Substraction for More"<<endl;
	cout<<"Enter 3 for Multiplication"<<endl;
	cout<<"Enter 4 for Divide"<<endl;
	cin>>choice;
	if(choice==1){
	cout<<"The Sum of A+B is : "<<*p1+*p2<<endl;
	}
	else if(choice==2){
		cout<<"The Substraction of A-B is : "<<*p1-*p2;
	}
	else if(choice==3){
		cout<<"The multiplication is A * B is: "<<*p1 * *p2;
	}
	else if(choice==4){
		cout<<"The Division is A/B is : "<<*p1 / *p2;
	}
}
int main(){
	pointer();
}

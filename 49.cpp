#include<iostream>
using namespace std;
int main(){
	
	float num1,num2;
    cout<<"Enter a first number : ";
	cin>>num1;
	cout<<"Enter Second number : ";
	cin>>num2;
	char chose;
	cout<<"Enter an operator what you want to calculate : ";
	cin>>chose;
	if(chose== '+'){
		cout<<"The sum is : "<<num1+num2;
	}
	else if(chose== '-'){
		cout<<"The substraction is : "<<num1-num2;
	}
	else if(chose== '*'){
		cout<<"The multiplication is : "<<num1*num2;
	}
	else if(chose== '/'){
		cout<<"Ther division is : "<<num1/num2;
	}
	else
	cout<<"Wrong input";

}

#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"Enter a number : ";
	cin>>num1;
	cout<<"Enter a number : ";
	cin>>num2;
	if(num1>=10 && num1<=20 || num2>=10 && num2>=20){
		cout<<"18";
	}
	else{
		cout<<"The sum is : "<<num1+num2;
	}
}

#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"Enter a number : ";
	cin>>num1;
	cout<<"Enter a number : ";
	cin>>num2;
	cout<<"Enter a number : ";
	cin>>num3;
	if(num1>=20 && num1<=50 || num2>=20 && num2<=50 || num3>=20 && num3<=50){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
}

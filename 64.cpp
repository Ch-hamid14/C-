#include<iostream>
using namespace std;
int main(){
	int num1;
	cout<<"Enter the temperature : ";
	cin>>num1;
	if(num1<0){
		cout<<"the temperature is less then 0";
	}
	else if(num1>100){
		cout<<"Temperature is greater then 100";
	}
	else{
		cout<<"Number is in range of 0 to 100";
	}
}

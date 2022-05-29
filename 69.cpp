#include<iostream>
using namespace std;
int main(){
	int num1,num2,last1,last2;
	cout<<"Enter a number : ";
	cin>>num1;
	cout<<"Enter a number : ";
	cin>>num2;
	last1=num1%10;
	last2=num2%10;
	if(last1==last2){
		cout<<"Last digits are same";
	}
	else{
		cout<<"last digits are not same";
	}
}

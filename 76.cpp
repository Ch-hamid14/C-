#include<iostream>
using namespace std;
int main(){
	int num1,num2,sum,diff,ch;
	cout<<"Enter a number : ";
	cin>>num1;
	cout<<"Enter a number : ";
	cin>>num2;
	if(num1==5 || num2==5){
		cout<<"True"<<endl;
	}
	cout<<"Press + for sum"<<endl;
	cout<<"Press - for Substraction : ";
	cin>>ch;
	if(ch=='-'){
		diff=num1-num2;
		if(diff==5){
		cout<<"True"<<endl;
	}
	}
	else if(ch=='+'){
			sum=num1+num2;
			if(sum==5){
			cout<<"True";
		}
	}
	else{
		cout<<"False";
	}
	
}

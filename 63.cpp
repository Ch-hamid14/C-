#include<iostream>
using namespace std;
int main(){
	int num1,multiple;
	cout<<"Enter a number : ";
	cin>>num1;
	if(num1%3==0 || num1%7==0){
		cout<<"Number is multiple";
	}
	else{
		cout<<num1<<" Number is not a multiple of 3 and 7";
	}
}

#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	if(num%13==0){
		cout<<"The number is multiple of 13";
	}
	else{
		cout<<"Number is not multiple of 13";
	}
}

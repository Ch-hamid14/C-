#include<iostream>
using namespace std;
int main(){
	string num1,num2;
	cout<<"Enter five digit number : ";
	cin>>num1;
	for(int i=num1.length();i>=0;i--){
		num2+=num1[i];
	}
	cout<<"The reverse number is : "<<num2;
}

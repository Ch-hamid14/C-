#include<iostream>
using namespace std;
int main(){
	int num1,num2,mode1,mode2;
	cout<<"Enter a number : ";
	cin>>num1;
	cout<<"Enter a number : ";
	cin>>num2;
	mode1=num1%10;
	mode2=num2%10;
	if(mode1==mode2){
		cout<<"The right most digits are same";
	}
	else{
		cout<<"The right most digit are not same";
	}
}

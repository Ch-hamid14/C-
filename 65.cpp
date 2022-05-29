#include<iostream>
using namespace std;
int main(){
	int num,num2;
	cout<<"Enter the number : ";
	cin>>num;
	cout<<"Enter the second number : ";
	cin>>num2;
	if(num>=100 && num<=200 || num2>=100 && num2<=200){
		cout<<"The number is in range";
	}
	else{
		cout<<"The number is not in range of 100 to 200";
	}
}

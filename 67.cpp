#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"Enter a number : ";
	cin>>num1;
	cout<<"Enter a number : ";
	cin>>num2;
	if(num1>=90 && num1<=99 || num2>=90 && num2<=99){
		cout<<"Number are nearst to 100";
	}
	else if(num1==100 && num2==100){
		cout<<"Number are equal to 100 then return 0";
		return 0;
		}
}

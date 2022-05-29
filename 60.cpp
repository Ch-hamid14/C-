#include<iostream>
using namespace std;
int main(){
	int num1,num2,diff;
	cout<<"Enter the number : ";
	cin>>num1;
	diff=num1-51;
	if(num1>51){
		cout<<"The value is greater then 51 then tripple differnce is : "<<num1-num1-num1;
	}
	else{
		cout<<"The differnce is : "<<diff;
	}
}

#include<iostream>
using namespace std;
main(){
	int num1,num2,q,r;
	cout<<"Enter a number : ";
	cin>>num1;
	cout<<"Enter a dividing number : ";
	cin>>num2;
	q=num1/num2;
	cout<<"The Quotient is : "<<q<<endl;
	r=num1%num2;
	cout<<"The Reminder is : "<<r;
}

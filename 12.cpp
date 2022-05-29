#include<iostream>
using namespace std;
main(){
	float days;
	float week,month,years;
	cout<<"Enter Days : ";
	cin>>days;
	week=days/7;
	cout<<"The Weeks are : "<<week<<endl;
	month=days/30;
	cout<<"The months are : "<<month<<endl;
	years=days/365;
	cout<<"The Years are : "<<years;
}

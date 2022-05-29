#include<iostream>
using namespace std;
main(){
	int year;
	cout<<"Enter current year : ";
	cin>>year;
	if(year%4==0){
		cout<<year<<" : The year is leap year";
	}
	else {
		cout<<year<<" : The is not leap year";
	}
}

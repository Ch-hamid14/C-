#include<iostream>
using namespace std;
main(){
	string a,b,temp;
	cout<<"Enter first String : ";
	getline(cin,a);
	cout<<"Enter a Second String : ";
	getline(cin,b);
	cout<<endl;
	cout<<"Before Swap"<<endl;
	cout<<endl;
	cout<<a<<endl<<b<<endl;
	cout<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"After Swap"<<endl;
	cout<<endl;
	cout<<a<<endl<<b;
}

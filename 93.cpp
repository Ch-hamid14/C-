#include<iostream>
#include<string>

using namespace std;

int concatinate(){
	string st1,st2;
	string *p1=&st1;
	string *p2=&st2;
	cout<<"Enter first String : ";
	getline(cin,st1);
	cout<<"Enter Second String : ";
	getline(cin,st2);
	
	cout<<endl;
	
	cout<<"The Concatinate String is : "<<*p1 + *p2;
}
int main(){
	concatinate();
}

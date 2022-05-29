#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int stReverse(){
	string st1;
	string *p1=&st1;
	cout<<"Enter a String : ";
	getline(cin,st1);
	reverse(st1.begin(),st1.end());
	cout<<endl;
	cout<<"Reverse String is "<<endl;
	cout<<endl;
	cout<<*p1;
}
int main(){
	stReverse();
}

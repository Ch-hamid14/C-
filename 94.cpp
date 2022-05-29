#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int remover(){
	string st1;
	string *p1=&st1;
	cout<<"Enter String With White Spaces : ";
	getline(cin,st1);
	st1.erase(remove(st1.begin(),st1.end(),' '),st1.end());
	cout<<*p1;
	
}
int main(){
	remover();
}

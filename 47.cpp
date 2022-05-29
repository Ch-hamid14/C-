#include<bits/stdc++.h>
using namespace std;

int main(){
	string st1;
	cout << "Enter the String with spaces : ";
	getline(cin,st1);
	int l=st1.length();
	int c=count(st1.begin(),st1.end(),' ');
	remove(st1.begin(),st1.end(),' ');
	st1.resize(l-c);
	cout<<"The new String without spaces is : "<<st1;

}

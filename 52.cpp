#include<bits/stdc++.h>
using namespace std;

remove(){
	string s1;
	cout<<"Enter the String with Spaces : ";
	getline(cin,s1);
	int l=s1.length();
	int c=count(s1.begin(),s1.end(),' ');
	remove(s1.begin(),s1.end(),' ');
	s1.resize(l-c);
	cout<<"The String After remove brackets : "<<s1;
}
int main(){
	remove();
}

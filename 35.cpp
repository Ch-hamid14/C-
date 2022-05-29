#include<iostream>
using namespace std;
int main(){
	string s1,s2;
	cout<<"Enter a String : ";
	getline(cin,s1);
	for(int i=s1.length();i>=0;i--){
		s2+=s1[i];
	}
	cout<<"The Reverse String is : "<<s2;
}

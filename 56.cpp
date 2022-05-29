#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	 string s1;
	char a;
	cout<<"Enter a String With Digits : ";
	getline(cin,s1);
	cout<<"Enter the element You want to remove : ";
	cin>>a;
	s1.erase(remove(s1.begin(),s1.end(),a),s1.end());
	cout<<"The new String is : "<<s1;
}

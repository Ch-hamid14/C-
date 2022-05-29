#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int stLength(){
	string st;
	string *p=&st;
	cout<<"Enter a String : ";
	getline(cin,st);
	cout<<endl;
	cout<<"The length of String is";
	cout<<endl;
	cout<<st.length();
}
int main(){
	stLength();
}

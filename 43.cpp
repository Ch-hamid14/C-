#include<iostream>
using namespace std;

int main(){
	string s1,s2;
	cout<<"Enter the String 1 : ";
	getline(cin,s1);
	cout<<"Enter the String 2 : ";
	getline(cin,s2);
	cout<<endl;
	if(s1==s2){
		cout<<"The String : "<<s1<<" : and string : "<<s2<<" : are same.";
	}
	else
	cout<<"The String : "<<s1<<" : and string : "<<s2<<" : are not same.";
	
	cout<<endl;
}

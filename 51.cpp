#include<iostream>
using namespace std;

reverse(){
	string s1,s2;
	cout<<"Enter String : ";
	getline(cin,s1);
	for(int i=s1.length();i>=0;i--){
		s2=s1[i];
		cout<<s2;
	}
}
int main(){
	reverse();
}

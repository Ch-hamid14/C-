#include<iostream>
using namespace std;
concatinate(){
	string s1,s2,imerge;
	cout<<"Enter String 1 : ";
	getline(cin,s1);
	cout<<"Enter String 2 : ";
	getline(cin,s2);
	imerge=s1+s2;
	cout<<endl;
	cout<<"The concatinate string is : "<<imerge;
}
int main(){
	concatinate();
}

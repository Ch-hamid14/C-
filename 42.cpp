#include<iostream>
using namespace std;

int main(){
	string s1;
	char c;
	int count=0;
	cout<<"Enter the String : ";
	getline(cin,s1);
	cout<<"Enter the Character to find the String : ";
	cin>>c;
	cout<<endl;
	for(int i=0;s1[i]!='\0';i++){
		if(s1[i]==c)
		count++;
	}
	cout<<endl;
	cout<<"The frequency of Character : "<<c<<" : in String is : "<<count;
	cout<<endl;
}

#include<iostream>
using namespace std;
main(){
	char alpha;
	cout<<"Enter a character : ";
	cin>>alpha;
	if(alpha>='a' && alpha<='z'){
		cout<<"Charcter is LoweCase";
	}
	else if(alpha>='A' && alpha<='Z'){
		cout<<"The character is UpperCase";
	}
	else if(alpha>='0' && alpha<='9'){
		cout<<"This is Number";
	}
	else if(alpha>='!' && alpha<='+'){
		cout<<"This is Special Keyword";
	}
	else{
		cout<<"Wrong input";
	}
}

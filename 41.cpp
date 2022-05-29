#include<iostream>
using namespace std;

int main(){
	string a="Hamid Ashraf";
	char c;
	int count=0;
	cout<<"Enter the character to find the frequency : ";
	cin>>c;
	for(int i=0; a[i]!='\0';i++){
		if(a[i]==c)
		count++;
	}
	cout<<"The frequency of : "<<c<<" : in string is : "<<count;
}

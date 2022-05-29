#include<iostream>
using namespace std;
int main(){
	string s1="Hamid",s2;
	for(int i=s1.length();i>=0;i--){
		s2+=s1[i];
	}
	cout<<"Now the reverse String is : "<<s2;
}

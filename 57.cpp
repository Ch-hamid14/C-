#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int remover(){
	string s1;
	char ch;
	cout << "Enter a String : ";
	getline(cin, s1);
	cout << "Enter a Character You Want To remove : ";
	cin >> ch;
	s1.erase(remove(s1.begin(), s1.end(),ch),s1.end());
	cout << "The New String is : " << s1;
}
int main(){
	remover();
}

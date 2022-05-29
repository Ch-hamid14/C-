#include<iostream>
#include<cstring>
using namespace std;
int changer(){
	char s1[] = { "HAMID ASHRAF" };
	cout << "The String is : " << s1 << endl;
	cout << endl;
	for (int i = 0; i<strlen(s1); i++){
		putchar(tolower(s1[i]));
	}
	cout<<endl;
}
int changer2(){
	cout<<endl;
	char st2[] = { "hamid ashraf" };
	cout << "The string is : " << st2<<endl;
	cout << endl;
	for (int i = 0; i < strlen(st2); i++){
		putchar(toupper(st2[i]));
	}
}
int main(){
	changer();
	changer2();
}

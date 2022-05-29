#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char s1[]={"HAMID ASHRAF"};
	cout<<"The String is : "<<s1<<endl;
	cout<<endl;
	for(int i=0;i<strlen(s1);i++){
		putchar(tolower(s1[i]));
	}
}

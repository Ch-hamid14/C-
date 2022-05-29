#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	char s1[]={"hamid ashraf"};
	cout<<"The string is : "<<s1<<endl;
	cout<<endl;
	for(int i=0;i<strlen(s1);i++)
	putchar(toupper(s1[i]));
}

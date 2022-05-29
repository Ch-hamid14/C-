#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int remover(){
	string s1="A,a,E,e,I,i,O,o,U,u";
	char ch;
	cout<<"The list Of Vovel Character is : "<<s1<<endl;
	cout<<endl;
	cout<<"Enter any Vovel character To remove From String : ";
	cin>>ch;
	cout<<endl;
	if(s1.length()==ch){
		s1.erase(remove(s1.begin(),s1.end(),ch),s1.end());
		cout<<"The String of Vovel Letter after removing : "<<s1<<endl;
		cout<<endl;
	}
	else{
		cout<<"The Character is not a Vovel"<<endl;
		cout<<endl;
	}
}
int main(){
	remover();
	system("pause");
}

#include<iostream>
using namespace std;

PersonalData(){
	string name;
	int cms;
	cout<<"Enter Your Name : ";
	getline(cin,name);
	cout<<"Enter Your CMSID : ";
	cin>>cms;
	cout<<endl;
	
	cout<<"Your name is : "<<name<<endl;
	
	cout<<endl;
	
	cout<<"Your CMSID is : "<<cms;

}
int main(){
	PersonalData();
	
}

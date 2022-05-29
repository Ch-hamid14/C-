#include<iostream>
using namespace std;
int main(){
	cout<<"The Natural number range 1 to 20 "<<endl;
	for(int i=1;i<=20;i++){
		cout<<i<<endl;
	}
	int sum=0;
	for(int i=1;i<=20;i++){
		sum=sum+i;
	}
	cout<<"The some of first 20 natural number are : "<<sum;
}

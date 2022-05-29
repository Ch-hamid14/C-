#include<iostream>
using namespace std;
int main(){
	cout<<"The Even numbers in range of 0 to 10 "<<endl;
	for(int i=0;i<=10;i=i+2){
		cout<<i<<endl;
	}
	int sum=0;
	for(int i=0;i<=10;i=i+2){
		sum=sum+i;
	}
	cout<<"The sum of first ten even numbers are : "<<sum;
}

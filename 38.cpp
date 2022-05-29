#include<iostream>
using namespace std;
int main(){
	cout<<"The Odd numbers in range of 0 to 10"<<endl;
	for(int i=1;i<=10;i=i+2){
		cout<<i<<endl;
	}
	int sum=0;
	for(int i=1;i<=10;i=i+2){
		sum=sum+i;
	}
	cout<<"The sum of first 10 odd numbers are : "<<sum;
}

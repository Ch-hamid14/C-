#include<iostream>
using namespace std;

int main(){
	int i,num,reverse,reminder=0;
	cout<<"Enter five digit number : ";
	cin>>num;
	while(num!=0){
		reminder=num%10;
		reverse=reminder+(reverse*10);
		num=num/10;
	}
	cout<<"The reverse number is : "<<reverse;
}

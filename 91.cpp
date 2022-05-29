#include<iostream>
using namespace std;

int main(){
	int a=5,b=3;
	int *p1=&a ;int *p2=&b;
	cout<<"The Sum of A and B is : "<<*p1+*p2;
}

#include<iostream>
using namespace std;

int main(){
	int a=5;
	int *b=&a;
	cout<<"The adress of a is : "<<&a<<endl;
	cout<<"The value of b at Adress a is : "<<*b;
}

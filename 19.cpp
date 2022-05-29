#include<iostream>
using namespace std;
main(){
	int n,num,flag=0;
	cout<<"Enter a number : ";
	cin>>num;
	n=num/2;
	for(int i=2;i<=n;i++){
	if(num%i==0){
		cout<<num<<" :  is NOT prime number";
		flag=1;
		break;
	}
}
    if(flag==0)
    cout<<num<<" :  is prime number";
}

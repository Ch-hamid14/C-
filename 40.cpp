#include<iostream>
using namespace std;
int main(){
	int upto,num,sum=0,i;
	cout<<"Enter a number Upto : ";
	cin>>upto;
	for(num=2;num<=upto;num++){
		for( i=2;i<=(num/2);i++){
			if(num%i==0){
		      i=num;
		      break;
			}
		}
	}
	if(i!=num){
		sum+=num;
		cout<<"the sum of prime number is : "<<sum;
	}
}

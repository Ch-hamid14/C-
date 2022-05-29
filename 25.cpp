#include<iostream>
using namespace std;
main(){
	int num;
	cout<<"Enter a number for table : ";
	cin>>num;
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
			i=num*j;
			cout<<num<<" * "<<j<<" = "<<i<<endl;
		} 
	}
}

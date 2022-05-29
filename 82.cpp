#include<iostream>
#include<algorithm>
using namespace std;
int check(){
      int a[2];
	for(int i=0;i<2;i++){
		cout<<"Enter a number : ";
		cin>>a[i];
		if(a[i]==15 || a[i]==20){
			cout<<" True "<<endl;
			break;
			return 1;
		}
		else
		return 0;	
	}
}
int main(){
	check();
}

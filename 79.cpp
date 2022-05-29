#include<iostream>
using namespace std;
int main(){
	int a[4]={10,20,30,40},temp=0;
	for(int i=0;i<4;i++){
		if(a[0]<a[1])
			temp=a[i+1];
		cout<<temp<<endl;
	}
}

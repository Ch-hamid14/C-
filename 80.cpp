#include<iostream>
using namespace std;
int main(){
	float a[5]={10,20,-30,-40,30},a2[5]={10, 20, 30, 40, 30},mid,mid2;
	for(int i=0;i<5;i++){
		cout<<a[i]<<"\t";
		mid=a[(i)/2];
	}
	cout<<endl;
	for(int j=0;j<5;j++){
		cout<<a2[j]<<"\t";
		mid2=a2[(j)/2];
	}
	cout<<endl;
	cout<<endl;
	cout<<"The mid number in array is : "<<mid<<"  "<<mid2<<endl;
	
	
}

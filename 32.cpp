#include<iostream>
using namespace std;
main(){
	char alpha,temp;
	cout<<"Enter a character : ";
	cin>>alpha;
	if(alpha>='a' && alpha<='z'){
		if(alpha>='A' && alpha<='Z')
		{
		  temp=ctrcpy(alpha);
			cout<<temp;
		}
	}
}

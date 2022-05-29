#include<bits/stdc++.h>
using namespace std;

int main(){
	string st1="H A M I D A S H R A F";
	cout<<"The String With Spaces is : "<<st1<<endl;
	int l=st1.length();
	int c=count(st1.begin(),st1.end(),' ');
	remove(st1.begin(),st1.end(), ' ');
	st1.resize(l-c);
	cout<<"The new String Without Spaces is : "<<st1;
}

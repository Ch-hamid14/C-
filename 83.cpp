#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

strSwap(string str1,string str2){
           string swp;
           swp=str1;
           str1=str2;
           str2=swp;
           cout<<str1<<" "<<str2;
}
int main(){
	strSwap("Sahiba","Hamid");
}

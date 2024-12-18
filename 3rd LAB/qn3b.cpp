#include<iostream>
using namespace std;
int fun(char a='*',int n=80){
	int i;
	for(i=0;i<n;i++){
		cout<<a;
	}
}
int main(){
	fun();
	cout<<endl;
	fun('*');
}
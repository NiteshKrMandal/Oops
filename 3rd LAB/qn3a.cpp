#include<iostream>
using namespace std;
int fun(char a)
{
	for(int i=0;i<80;i++)
    {
		cout<<a;
	}
}
int fun(){
	for(int i=0;i<80;i++)
    {
		cout<<"* ";
	}
	cout<<endl;
}
int main(){
	fun();
	fun('P');
} 
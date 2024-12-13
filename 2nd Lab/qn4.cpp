#include<iostream>
#include<string.h>
using namespace std;
class complex{
	float real,img;
	public:
		void getsdata(){
			cout<<"Enter real:";
			cin>>real;
			cout<<"Enter Img:";
			cin>>img;
		}
		void showsdata(){
			cout<<real<<"+"<<img<<"i"<<endl;
		}
};
int main(){
	complex c[10];
	for(int i=0;i<10;i++){
			c[i].getsdata();
			}
cout<<"The complex numbers are: "<<endl;
	for(int i=0;i<10;i++){
		c[i].showsdata();
		}
}
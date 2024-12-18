#include<iostream>
using namespace std;
class complex{
	float real,img;
	public:
		void getdata(int x,float y)
        {
			real=x;
			img=y;
		}
		void showdata()
        {
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		complex add(int x,complex s2){
		complex temp;
		temp.real=s2.real+x;
		temp.img=s2.img;
		return temp;
		}
		complex add(complex s1,complex s2){
			real=s1.real+s2.real;
			img=s1.img+s2.img;
		}
};
int main(){
	complex c1,c2,c3,c4;
	c1.getdata(5,8);
	c2.getdata(2,3);
	c4=c3.add(5,c1);
	c3.add(c1,c2);
	c3.showdata();
	c4.showdata();
}
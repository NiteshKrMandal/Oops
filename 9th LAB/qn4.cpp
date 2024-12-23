#include<iostream>
using namespace std;
class number{
	protected:
		int val;
		public:
			void setdata(int x){
				val=x;
			}
			virtual void show()=0; 
};
class he:public number{
	public:
		void show(){
			cout<<"HEXADECIMAL: "<<hex<<val<<endl;
		}
};
class oc: public number{
	public:
		void show(){
			cout<<"OCTADECIMAL: "<<oct<<val<<endl;
		}
};
class de:public number{
	public:
		void show(){
			cout<<"DECIMAL: "<<val<<endl;
		}
};
int main(){
	number *ptr;
	de d;
	oc o;
	he h;
	ptr=&d;
	ptr->setdata(20);
	ptr->show();
	ptr=&o;
	ptr->setdata(40);
	ptr->show();
	ptr=&h;
	ptr->setdata(1514);
	ptr->show();
}

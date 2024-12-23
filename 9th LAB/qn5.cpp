#include<iostream>
#include<string.h>
using namespace std;
class media{
	protected:
		char title[50];
		double price;
		public:
			media(char *s,double x){
				strcpy(title,s);
				price=x;
			}
			virtual void display(){
			}
};
class book:public media{
	int pages;
	public:
		book(char *s,double x,int p):media(s,x){
			pages=p;
		}
		void display(){
			cout<<title<<endl;
			cout<<price<<endl;
			cout<<pages<<endl;
		}
};
class tape:public media{
	double time;
	public:
			tape(char *s,double x,double q):media(s,x){
				time=q;
			}
			void display(){
				cout<<title<<endl;
				cout<<price<<endl;
				cout<<time<<endl;
			}
};
int main(){
	char *ti=new char[20];
	char *tit=new char[20];
	cout<<"ENETR THE NAME OF BOOK I\n";
	cin>>ti;
	cout<<"ENTER THE NAME OF BOOK II\n";
	cin>>tit;
	book book1(ti,400,12);
	tape tape1(tit,500,34);
	media *media1;
	media *media2;
	media1=&book1;
	media2=&tape1;	
	media1->display();
	media2->display();
}

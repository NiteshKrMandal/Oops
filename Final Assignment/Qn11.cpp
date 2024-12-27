#include<iostream>
#include<stdlib.h>
using namespace std;
class book{
	char name[1000];
	char auth[500];
	float price;
	int str;
	int no_copies;
	public:
		void menu_drive(){
			cout<<"ENTER BOOK NAME:"<<endl;
			gets(name);
			cout<<"ENTER AUTHOR NAME:"<<endl;
			gets(auth);
			cout<<"ENTER PRICE: "<<endl;
			cin>>price;
			cout<<"ENTER THE NO OF COPIES YOU WANT: "<<endl;
			cin>>no_copies;
			str=200;
		}
		void display(){
			if(no_copies<=str){
			cout<<"NO OF COPIES AVIALABLE: "<<str<<endl;
			cout<<"BOOK: "<<name<<endl;
			cout<<"AUTHOR: "<<auth<<endl;
			cout<<"PRICE: "<<price<<endl;
			cout<<"NO OF COPIES YOU WANT: "<<no_copies<<endl;
			cout<<"TOTAL="<<no_copies*price<<endl;
			str-=no_copies;
			cout<<"NO OF BOOK AVIALABLE "<<str<<endl;
		}
		else{
			cout<<"BOOK NAME: "<<name<<endl;
			cout<<"AUTHOR NAME:"<<auth<<endl;
			cout<<"PRICE: "<<price<<endl;
			cout<<"NO OF COPIES YOU WANT:"<<no_copies<<endl;
			cout<<"NOT AVAILABEL"<<endl;
		}
	}
		
};
int main(){
	book b;
	b.menu_drive();
	b.display();
}
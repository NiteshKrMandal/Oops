#include<iostream>
using namespace std;
class account{
	protected:
		string name;
		int acc_no;
		int balance;
		int withdraw;
		int deposite;
		public:
			virtual void getdata(){
				cin>>name;
				cin>>acc_no;
				cin>>balance;
				cin>>withdraw;
				cin>>deposite;
			}
			virtual void display(){
				cout<<name<<endl;
				cout<<acc_no<<endl;
				cout<<balance<<endl;
				cout<<withdraw<<endl;
				cout<<deposite<<endl;
			}
			virtual void sav()=0;
};
class saving:public account{
	protected:
	int min_amount=1000;
	int x;
	public:
		void sav(){
		x=balance+deposite-withdraw;
		if(x>min_amount){
			balance=x;
			printf("TOTAL BALANCE:%d",balance);
		}
		else{
			printf("YOU CANT WITHDRAW\n");	
			printf("TOTAL BALANCE:%d",balance);
		}	
	}
};
class current:public account{
	public:
		void sav(){
			if(balance >0){
				printf("TOTAL BALANCE:%d",balance);
			}
			else{
				printf("OVERDUE\n");
			}
		}
};
int main(){
	saving s;
	account *a;
	a=&s;
	a->getdata();
	a->display();
	a->sav();
	current c;
	account *b;
	b=&c;
	b->getdata();
	b->display();
	b->sav();
}

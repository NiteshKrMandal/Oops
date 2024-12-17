//Class to represent a bank account
#include<iostream>
using namespace std;
class bank{
	char name[100];
	int acc;
	float amount;
	char typ[10];
	public:
		void getdata(){
			//initial value
			cout<<"Enter name:\n";
			cin>>name;
			cout<<"Enter Account number:\n";
			cin>>acc;
			cout<<"Amount in bank:\n";
			cin>>amount;
			cout<<"Enter type of account:SAVING\tOR\tCURRENT\n";
			cin>>typ;
		}
		void deposite(){
			int m;
			cout<<"Enter amount you want to deposite:\n"<<endl;
			cin>>m;
			cout<<"Total amount after deposite:"<<amount+m<<endl;
			amount+=m;
		}
		void withdraw(){
			int x;
			cout<<"Amount you want to withdraw:"<<endl;
			cin>>x;
			if(x>amount){
				cout<<"Can't perform transaction"<<endl;
			}
			else
			amount-=x;
		}
		void showdata(){
			cout<<"Name:"<<name<<endl<<"Your Remaining Balance is:"<<amount;
		}
};
int main(){
	bank b;
	int y,w;
	b.getdata();
	cout<<"WANT TO DEPOSITE:";
	cin>>y;
	if(y==1){
	b.deposite();
	}
	cout<<"WANT TO WITHDRAWAL:";
	cin>>w;
	if(w==1){
	b.withdraw();
	}
	b.showdata();
}
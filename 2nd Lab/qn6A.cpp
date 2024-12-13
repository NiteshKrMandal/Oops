#include<iostream>
using namespace std;
class emp{
	int id;
	char name[100];
	int age;
	float salary;
	public:
		void getdata(){
			cout<<"Enter id:";
			cin>>id;
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter age:";
			cin>>age;
			cout<<"Enter salary:";
			cin>>salary;
		}
		void showdata(){
			cout<<"NAME:"<<name<<endl<<"ID:"<<id<<endl<<"AGE:"<<age<<endl<<"GROSS SALARY:"<<salary+0.2*salary+0.9*salary<<endl;
		}
};
int main(){
	int n,i;
	emp a[n];
	cout<<"Enter the number of employee:";
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<"Enter the info for "<<i<<"number employee"<<endl;
		a[i].getdata();
	}
	for(i=1;i<=n;i++){
		cout<<"Info for "<<i<<"number employee"<<endl;
		a[i].showdata();
	}
}
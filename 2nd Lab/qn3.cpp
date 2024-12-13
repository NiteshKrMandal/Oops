#include<iostream>
#include<string.h>
using namespace std;
class student{
	char name[20];
	int roll;
	float marks[5];
	float total;
	float per;
	public:
		void getsdata(){
			cout<<"Enter Name:";
			cin>>name;
			cout<<"Enter Roll No:";
			cin>>roll;
			cout<<"Enter 5 subject marks:";
			for(int i=0;i<5;i++){
			cin>>marks[i];
		}
	}
		void showsdata(){
			cout<<"NAME:"<<name<<endl;
			cout<<"ROLL:"<<roll<<endl;
			for(int i=0;i<5;i++){
			total+=marks[i];
			}
			cout<<"TOTAL:"<<total<<endl;
			per=total/5;
			cout<<"PERCENTAGE:"<<per<<endl;
		}
};
int main(){
	student s;
	s.getsdata();
	s.showsdata();
}
#include<iostream>
using namespace std;
class employe{
	protected:
 		char name[25];
	 	int id,salary,DA,HRA,hr,pph;
	 	public:
	 		void info(){
			 cout<<"Enter name : ";
			 cin>>name;
			 cout<<"Enter ID : ";
			 cin>>id;
		}
		 	void regular(){
			 cout<<"Enter salary : ";
			 cin>>salary;
			 cout<<"Enter DA : ";
			 cin>>DA;
			 cout<<"Enter HRA : ";
			 cin>>HRA;
		}
	 		void part(){
			 cout<<"Enter number of hours : ";
			 cin>>hr;
			 cout<<"Enter pay per hour : ";
			 cin>>pph;
		}
	 		virtual void sal() = 0;
};

class regular:public employe{
 	public:
 	void sal(){
		 cout<<"\nSalary of regular employee : "<<salary + DA + HRA<<endl;
}
};
class part:public employe{
 	public:
 	void sal(){
 		cout<<"\nSalary of Part-time employee : "<<pph*hr*30<<endl;
}
};
int main(){
	regular r;
	employe *eptr,*eeptr;
	eptr=&r;
	eptr->info();
	eptr->regular();
	eptr->sal();
	
	part p;
	eeptr=&p;
	eeptr->info();
	eeptr->part();
	eeptr->sal();
	
}

#include<iostream>
using namespace std;
class student{
	char name[25];
	int roll;
	int marks[6];
	public:
	    void getdata(){
		 	cout<<"NAME: ";
			cin>>name;
			cout<<"ROLL: ";
			cin>>roll;
			for(int i=1;i<=6;i++)
            {
			cout<<"MARKS OF "<<i<<"SUBJECT ";
			cin>>marks[i];
		}
 	}
		void showdata(){
			cout<<"_____________________________________________________________________________"<<endl;
            cout<<"STUDENT DETAIL";
            cout<<"_____________________________________________________________________________"<<endl;
			cout<<"NAME: "<<name<<endl;;
			cout<<"ROLL: "<<roll<<endl;
			for(int i=1;i<=6;i++)
            {
				cout<<"MARKS FOR "<<i<<"st SUBJECT: ";
				cout<<marks[i]<<endl;
			}		
			int total=0;
			for(int i=1;i<=6;i++)
            {
				total=total+marks[i];
			}
			cout<<"Grand Total: "<<total<<endl;
			if(total/6>=90)
			cout<<"GRADE OBTAINED:O"<<endl;
			else if(((total/6)>=80)&&((total/6)<90))
			cout<<"GRADE OBTAINED:E"<<endl;
			else if(((total/6)>=70)&&((total/6)<80))
			cout<<"GRADE OBTAINED:A"<<endl;
			else if(((total/6)>=60)&&((total/6)<70))
			cout<<"GRADE OBTAINED:B"<<endl;
			else if(((total/6)>=50)&&((total/6)<60))
			cout<<"GRADE OBTAINED:C"<<endl;
			else if(((total/6)>=0)&&((total/6)<50))
			cout<<"GRADE OBTAINED:FAIL"<<endl;
 	}
};
int main(){
	int n,i,j;
 	student s;
	s.getdata();
	s.showdata();	
}
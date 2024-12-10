#include<iostream>
#include<string.h>
using namespace std;
class employee
{
private:
  char name[25];
  int employee_no;
  char dept[15];
  int salary;  
public:
inline void inputdata()
{
    cout<<"Enter Name of employee:";
    cin.get(name,25);
    cout<<"Enter employee number:";
    cin>>employee_no;
    cout<<"Enter department name:";
    cin>>dept;
    cout<<"Enter  employee salary:";
    cin>>salary;
}
    inline void outputdata(){
    
        cout<<"Name:"<<name<<endl;
        cout<<"Employee no:"<<employee_no<<endl;
        cout<<"Department:"<<dept<<endl;
        cout<<"Salary Provided:"<<salary<<endl;

    
}
};

int main()
{
employee e;
e.inputdata();
cout<<"DETAILS OF EMPLOYEE"<<endl;
cout<<"----------------------"<<endl;
e.outputdata();
return 0;
}
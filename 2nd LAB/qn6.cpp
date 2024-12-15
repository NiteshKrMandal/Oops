#include<iostream>
#include<conio.h>
class Employee
{
    char emp_name[30];
    int emp_number;
    float basic,da,hra,gross_salary,net_salary;
    public: 
    void emp_details()
    {
        cout<<"Enter Employee Number";
        cin>>emp_number;
        cout<<"Employee Name";
        cin<<emp_name;
        cout<<"Basic Salary\n";
        cin<<basic;
        cout<<"Employee Details\n";
    }
    float net_salary()
    {
        da=basic*0.80;
        gross_salary=basic+da;
        hra=gross_salary*0.10;
        net_salary=(basic+da)-hra;
        return net_salary;
    }
    void emp_detail1()
    {
        cout<<"Employee Deatails\n";
        cout<<"Employee Number\n";
        cout<<"Employee Name\n";
        cout<<"Net salary\n";
    }
};
int main()
{
Employee a;
a.emp_details();
a.emp_detail1();
return 0;
}
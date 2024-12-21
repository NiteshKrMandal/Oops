#include<iostream>
using namespace std;
class employee{
    protected:
    char name[20];
    int id;
    float salary;
    public:
    void getdata()
    {
        cout<<"Enter Name of Employee: ";
        cin>>name;
        cout<<"Enter ID: ";
        cin>>id;
       // cout<<"Salary";
        
    }

void display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<id<<endl;
   // cout<<"Salary: "<<salary()<<endl;
}

    
};
class regular: public employee
{
    int basic,da,hra;
    public:
    void getdata()
    {
    employee::getdata();
    cout<<"Enter Basic Salary , HRA , DA "<<endl;
    cin>>basic>>hra>>da;
    } 
    // int salary1()
    //     {
    //         int basic,hra,da,q;
    //         q=basic + hra + da;
    //         return q;
    //     }
    void display()
    {
        employee::display();
        cout<<"Basic Salary: "<<basic<<endl;
        cout<<"HRA: "<<hra<<endl;
        cout<<"DA:"<<da<<endl;
        cout<<"Salary: "<<(basic + hra + da)<<endl;
    } 
};
class parttime: public employee
{
    int no,pay;
    public:
    void getdata()
    {
        employee::getdata();
        cout<<"Enter No of Hours: ";
        cin>>no;
        cout<<"Enter Pay Per Hour: ";
        cin>>pay;
    }
    
    void display()
    {
        employee::display();
        cout<<"No of Hours:"<<no<<endl;
        cout<<"Pay Per Hour:"<<pay<<endl;
        cout<<"Salary:"<<(no*pay)<<endl;
    }
};
int main()
{
    regular r;
    parttime p;
    r.getdata();
    p.getdata();
    r.display();
    p.display();
}
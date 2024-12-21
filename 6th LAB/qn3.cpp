#include<iostream>
#include<string.h>
using namespace std;
class student{
    protected:
    string name;
    int roll;
    int age;
    public:
    void stud_get()
{
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Roll: ";
    cin>>roll;
    cout<<"Age: " ;
    cin>>age;
}
};
class test:virtual public student
{
    int marks[3];
    public:
    void test_get()
    {
        cout<<"Enter 3 subjects Marks"<<endl;
        cin>>marks[0]>>marks[1]>>marks[2];
    }
    int test_total()
    {
        return(marks[0]+marks[1]+marks[2]);
    }
};
class activities:virtual public student
{
    int act[2];
    public:
    void act_get(){
        cout<<"ENter mark for 2 activities"<<endl;
        cin>>act[0]>>act[1];
    }
    int act_tot()
    {
        return(act[0]+act[1]);
    }
};
class result:public test,public activities
{
    public:
    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"ROLL NO :"<<roll<<endl;
        cout<<"AGE :"<<age<<endl;
        cout<<"TOATAL MARK :"<<test_total() + act_tot()<<endl;
        cout<<"Percentage :"<<((test_total()+act_tot())/5)<<endl;

    }
};
int main()
{
    result r;
    r.stud_get();
    r.test_get();
    r.act_get();
    r.display();
}

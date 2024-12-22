#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class student{
    protected:
    char name[20];
    int roll;
    int age;
    public:
    student(char *n,int r,int a)
    {
        strcpy(name,n);
        roll=r;
        age=a;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class test:virtual public student
{
    protected:
    int mark[3];
    public:
    test(char *n,int r,int a,int m1,int m2,int m3,int m4):student(n,r,a)
    {
        mark[0]=m1;
        mark[1]=m2;
        mark[2]=m3;
        mark[3]=m4;
    }
    int tot_mark()
    {
        return(mark[0]+mark[1]+mark[2]+mark[3]);
    }

};
class activity:virtual public student
{
    protected:
    int act[2];
    public:
    activity(char *n,int r,int a,int act1,int act2):student(n,r,a)
    {
        act[0]=act1;
        act[1]=act2;
    }
    int tot_act()
    {
        return(act[0]+act[1]);
    }
};
class result:public test,public activity
{
    int tot;
    float per;
    public:
    result(char *n,int r,int a,int m1,int m2,int m3,int m4,int act1,int act2,int d1,float d2):student(n,r,a),test(n,r,a,m1,m2,m3,m4),activity(n,r,a,act1,act2)
    {
        tot=d1;
        per=d2;
    }
    void tot_display()
    {
        cout<<"Total Marks: "<<tot<<endl;
        cout<<"Percentage: "<<per;
       // (tot_mark()+tot_act())/4.0;
    }
};
int main()
{
    char na[20];
    int roll,age,m1,m2,m3,m4,act1,act2,tot,per;
    cout<<"Enter Name: ";
    cin>>na;
    cout<<"Enter Roll NO: ";
    cin>>roll;
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter 4 Subjects Marks: ";
    cin>>m1>>m2>>m3>>m4;
    cout<<"Enter 2 Activities Marks: ";
    cin>>act1>>act2;
    tot=m1+m2+m3+m4+act1+act2;
    per=tot/4.0;
    result q(na,roll,age,m1,m2,m3,m4,act1,act2,tot,per);
    q.student::display();
    q.tot_display();
}
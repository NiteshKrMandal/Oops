#include<iostream>
#include<string.h>
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
    cout<<"Roll: "<<roll<<endl;
    cout<<"Age: "<<age<<endl;
}
};
class test:public student
{
private:
int mar1;
int mar2;
int mar3;
int mar4;
public:
test(char *n,int r,int a,int m1,int m2,int m3,int m4):student(n,r,a)
{
    mar1=m1;
    mar2=m2;
    mar3=m3;
    mar4=m4;

}
void display()
{
    student::display();
    cout<<"Marks Obtained: "<<mar1<<'\t'<<mar2<<'\t'<<mar3<<'\t'<<mar4<<endl;
}
};
class result:public test
{
    private:
    float tot;
    float avg;
    public:
    result(char *n,int r,int a,int m1,int m2,int m3,int m4,float t,float a1):test(n,r,a,m1,m2,m3,m4)
    {
        tot=t;
        avg=a1;
    }
    void display()
    {
       
       // tot=(mar1+m2+m3+m4);
       // avg=tot/4.0;
        cout<<"Total: "<<tot<<endl;
        cout<<"Average: "<<avg<<endl;
    }
};
int  main()
{
char p[20];
int q, r, s, mark1, mark2, mark3, mark4;
float tot,avg;
cout<<"Enter Name: ";
cin>>p;
cout<<"Enter Roll No: ";
cin>>r;
cout<<"Enter Age: ";
cin>>s;
cout<<"Enter 4 Subjects Marks: ";
cin>>mark1>>mark2>>mark3>>mark4;
tot=mark1+mark2+mark3+mark4;
avg=tot/4.0;
result obj(p,r, s, mark1, mark2, mark3, mark4,tot,avg);
//obj.student::display();
obj.test::display();
obj.display();
}
#include<iostream>
#include<math.h>
using namespace std;

class name{
    private:
    char name[20];
    int roll;
    int age;
    char course[10];
    public:
    void getdata(){
        cout<<"Enter Name"<<endl;
        cin>>name;
        cout<<"Roll no"<<endl;
        cin>>roll;
         cout<<"Age"<<endl;
        cin>>age;
         cout<<"Course"<<endl;
        cin>>course;
         
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Course: "<<course<<endl;
    }
};
class test:public name
{
    private:
    int marks[4];
    public:
    void getdata()
    {
        cout<<"Enter 5 Subject marks"<<endl;
        cin>>marks[0]>>marks[1]>>marks[2]>>marks[3]>>marks[4];
    }
    void display()
    {
        cout<<"Marks In 5 subject are:"<<marks[0]<< "\t" <<marks[1] <<marks[2] <<marks[3]<<marks[4]<<endl;
    }
       int marks_tot()
{
   return( marks[0]+marks[1]+marks[2]+marks[3]+marks[4]);
}
    

};
class result:public test
{
    public:
    void display()
    {
cout<<"Total Mark :"<<marks_tot()<<endl;
cout<<"Perentage:"<<(marks_tot()/5)<<"%"<<endl;
    }
};
int main()
{
    result t;
    t.name::getdata();
    t.test::getdata();
    t.name::display();
    t.test::display();
    t.display();
}
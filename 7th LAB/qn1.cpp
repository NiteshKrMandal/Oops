#include<iostream>
#include<string.h>
using namespace std;
class student{
    protected:
    char name1[20];
    int roll;
   // char course[10];
    int age;
    public:
    student(char *a,int b,int c)
    {
       strcpy(name1,a);
        roll=b;
        age=c;
        //course=d;
    }

//     void getdata()
//     {
//         cout<<"Enter Name: ";
//         cin>>name;
//         cout<<"Enter ROLL NO: ";
//         cin>>roll;
//         cout<<"Enter Age: ";
//         cin>>age;
//         cout<<"ENter Course Name: ";
//         cin>>course;
//     }
    void display()
    {
        cout<<"Name: "<<name1<<endl;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Age: "<<age<<endl;
        //cout<<"Course: "<<course<<endl;
    }
};
class test:public student
{
    int mark[4];
    public:
    test(char *a,int b,int c,int p,int q,int r,int s):student(a,b,c)
    {
        mark[0]=p;
        mark[1]=q;
        mark[2]=r;
        mark[3]=s;
    }
    void display()
    {   
     cout<<"Marks Obtained: "<<mark[0]<<mark[1]<<mark[2]<<mark[3]<<endl;
    }
};
int main(){
char u[20];
int b,c,p,q,r,s;
//test t;
//test t(a,b,c,p,q,r,s);
    char name1[20];
    int roll,age,mark[4];
    //char course[10];
cout<<" Enter Name: ";
cin>>u;
cout<<" Enter Roll No: ";
cin>>b;
cout<<" Enter Age: ";
cin>>c;
// cout<<"Enter Course Name: ";
// cin>>course;
cout<<"Enter 4 Subject Marks: ";
cin>>p>>q>>r>>s;
// cin>>mark[0]>>mark[1]>>mark[2]>>mark[3];
test t(u,b,c,p,q,r,s);
cout<<"Details are "<<endl;
t.student::display();
t.display();
}
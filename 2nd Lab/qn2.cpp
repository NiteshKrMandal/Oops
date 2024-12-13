#include<iostream>
#include<string.h>
using namespace std;
class student{
    char name[20];
    int rollno;
    float ttl;
public: 
     void getdata()
{
			cout<<"Enter Name:\n";
			cin>>name;
			cout<<"Enter Roll No:\n";
			cin>>rollno;
			cout<<"Enter Total marks\n";
			cin>>ttl;
		}
void display()
{
    cout<<"Name Of Student:"<<name<<endl;
    cout<<"Roll No: "<<rollno<<endl;
    cout<<"Total MARK:"<<ttl<<endl;

}
};
int main()
{
    student s;
    s.getdata();
    s.display();
    return 0;
}
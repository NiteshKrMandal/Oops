#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int roll;
    char name[20];

  

    ofstream outf("Student");
    cout<<"Enter student Name: ";
    cin>>name;
    outf<<name<<"\n";
    cout<<"Enter Roll No: ";
    cin>>roll;
    outf<<roll<<"\n";

outf.close();
  ifstream inf("Student");
inf>>name;
inf>>roll;
cout<<"Student Name: "<<name<<"\n";
cout<<"Roll No: "<<roll<<"\n";
inf.close();


return 0;
}
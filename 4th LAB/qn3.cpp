#include<iostream>
using namespace std;
 class A
 {
 int a;
 static int in;
 static int out;
 public:
 input(int p)
 {
    a=p;
    in++;
 }
void output ()
{
    cout<<a;
    out++;
}
    static void display(){
        cout<<"IN:"<<in<<endl;
        cout<<"OUT:"<<out;
    }
 };
 int A::in;
 int A::out;
 int main()
 {
A m,n,o,r;
m.input(2);
n.input(5);
o.input(8);
r.input(6);
A::display();
 }
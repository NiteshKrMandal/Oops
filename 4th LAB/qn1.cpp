#include<iostream>
using namespace std;
class B;
class A 
{
 int x, y, q;
 friend class B;
 public:
 void input() 
{
 cout<<"Enter Firtst Number x:";
 cin>>x;
 friend void swap(A x,B y) 
}
class B
void input1()
{
 cout<<"Enter Second Number y:";
 cin>>y;
 friend void swap(A x,B y) 
}
void display() 
{
 cout <<"After Swap x is :" <<x<<endl;
 cout <<"After Swap y is :" <<y<<endl;
}
};
void swap(A x,B y) 
{ int temp
    temp=A.x;
    A.x=B.y;
    B.y=A.temp;
}
int main() 
{
    temp t1;
    t1.input()
    t1.input1();
    swap();
    t1.display();
    return 0;
}
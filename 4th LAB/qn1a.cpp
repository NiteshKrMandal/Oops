#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
    void getdata()
    {
        cout<<"Enter 1st Number"<<endl;
        cin>>a;
    }
    friend int swap(A,B);
};
class B
{
    int b;
    public:
    void inputdata()
    {
        cout<<"Enter 2nd Number"<<endl;
        cin>>b;
    }
    friend int swap(A,B);
};
int swap(A obj1,B obj2)
{
    int temp;
    temp=obj1.a;
    obj1.a=obj2.b;
    obj2.b=temp;
    cout<<"The swaped Numbers are"<<endl;
    cout<<obj1.a <<"\t" << obj2.b;
}
int main()
{
    A p;
    B q;
    p.getdata();
    q.inputdata();
    swap(p,q);
}
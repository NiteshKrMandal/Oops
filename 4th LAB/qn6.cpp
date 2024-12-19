#include<iostream>
using namespace std;
class B;
class A
{
int a;
public:
void inputdata(){
    cout<<"Enter the value of a:";
    cin>>a;
}
    friend void max(A obj1,B obj2);

};
class B
{
int b;
public:
void getdata(){
    cout<<"Enter the value of b:";
    cin>>b;
}
    friend void max(A obj1,B obj2);
};
void max(A obj1,B obj2){
if(obj1.a>obj2.b){
    cout<<"Max number is:"<<obj1.a;
}
else{
    cout<<"Max number is:"<<obj2.b;
}
}
int main(){
A p;
B q;
p.inputdata();
q.getdata();
max(p,q);
return 0;
}
#include<iostream>
using namespace std;
class shape{

protected:
int radius;
int sides;
int height;
int lent;
int width;
public:
virtual void getdata(){ }
virtual void display(){ }

};
// void getdata(){
//     cout<<"Enter Radious of Circle:";
//     cin>>radius;
//     cout<<"Enter sides od Triangle:";
//     cin>>sides;
//     cout<<"Enter Length and Width Of Rectangle:";
//     cin>>lent >>width;
// }

class circle:public shape
{
    public:
    void getdata(){
        cout<<"Enter Radius: ";
        cin>>radius;
    }
void display()
{
cout<<"Area of Circle Is: "<<3.14 *radius * radius<<endl;
   //int area_circle()
//{
//}
}
};
class triangle:public shape
{
       public:
    void getdata(){
        cout<<"Enter sides: ";
        cin>>sides;
        cin>>height;
    }
    void display()
    {
         cout<<"Area of Triangle Is: "<<0.5*sides*height<<endl;
        //int area_triangle()
//{
//}
       
    }

};
class rectangle: public shape
{
     public:
    void getdata(){
        cout<<"Enter length and width: ";
        cin>>lent>>width;
    }
void display()
{
cout<<"Area of Rectangle Is: "<<lent * width<<endl;

//}
}

};
int main()
{ shape *s1,*s2,*s3;
    circle c;
    s1=&c;
     s1->getdata();
    s1->display();
    triangle t;
    s2=&t;
    s2->getdata();
    s2->display();
    rectangle r;
   s3=&r;
    s3->getdata();
    s3->display();
}
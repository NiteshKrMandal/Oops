#include<iostream>
using namespace std;
class shape{

protected:
int radius;
int sides;
int lent;
int width;
public:



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
    void getdata1(){
        cout<<"Enter Radius ";
        cin>>radius;
    }
void display1()
{
cout<<"Area of Circle Is"<<endl<<area_circle()<<endl;
int area_circle()
{
    return(3.14*radius*radius);
}
}
};
class triangle:public shape
{
       public:
    void getdata2(){
        cout<<"Enter sides ";
        cin>>sides;
    }
    void display2()
    {
        int area_triangle()
{
    return(3/4*a*a);
}
        cout<<"Area of Triangle Is"<<endl<<area_triangle()<<endl;
    }

};
class rectangle: public shape
{
     public:
    void getdata3(){
        cout<<"Enter length and width ";
        cin>>lent>>width;
    }
void display3()
{
cout<<"Area of Rectangle Is"<<endl<<area_rectangle()<<endl;

    return(lent*width); 
    return 

}

};
int main()
{
    circle c;
    triangle t;
    rectangle r;
    c.getdata1();
    c.display1();
    t.getdata2();
    t.display2();
    r.getdata3();
    r.display3();
}
}
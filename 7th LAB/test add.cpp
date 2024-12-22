#include<iostream>
#include<string.h>
using namespace std;
class complex{
    int r,i;
    public:
    complex(int a=0,int b=0)
    {
        r=a;
        i=b;
    }
    void display(){
        cout<<r<<"+i"<<i<<endl;
    }
    complex operator + (complex &c)
    {
        complex p;
        p.r=r+c.r;
        p.i=i+c.i;
        return p;
    }
};
int main()
{
    complex c1(5,4),c2(3,9),c3;
    c3=c2+c1;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
#include<iostream>
using namespace std;
class mcm
{
    int m,cm;
    public:
    mcm(int a=0,int b=0)
    {
        m=a;
        cm=b;
    }
    void display()
    {
        cout<<"meter:"<<m<<endl;
        cout<<"centimeter:"<<cm<<endl;

    }

};
class finch
{
int f;
int inch;
public:
finch(int a=0,int b=0)
{
    f=a;
    inch=b;

}
void display()
{
    cout<<"feet:"<<f<<endl;
    cout<<"inch:"<<inch<<endl;
}
operator const mcm()
{
    int t=f*12+inch;
    float t1=t*2.54;
    int m1=t1/100;
    int cm1=(t1-m1*100);
    return mcm(m1,cm1);
}
};
int main()
{
    finch o1(9,2);
    mcm o2;
    o2=o1;
    o1.display();
    o2.display();

    return 0;
}
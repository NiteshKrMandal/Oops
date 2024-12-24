#include<iostream>
using namespace std;

class pound1
{
    int p;
    public:
    pound1(int a=0)
    {
        p=a;
        //cm=b;

    }
    void display()
    {
        cout<<"Pound:"<<p<<endl;
     //   cout<<"centimeter:"<<cm<<endl;

    }


};
class kilo
{
int kg;
//int grm;
public:
kilo(int a=0)
{
    kg=a;
    //grm=b;

}
void display()
{
    cout<<"Kilogram:"<<kg<<endl;
  //  cout<<"Gram:"<<grm<<endl;
}
operator const pound1()
{
    int t=kg*2.204;
    //float t1=t*0.00220;
    //int p1=t1/100;
    //int cm1=(t1-m1*100);
    return pound1(t);

}
};
int main()
{
    kilo o1(8);
    pound1 o2;
    o2=o1;
    o1.display();
    o2.display();

    return 0;
}
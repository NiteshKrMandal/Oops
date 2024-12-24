#include<iostream>
using namespace std;

class frn
{
    int ff;
    public:
    frn(int a=0)
    {
        ff=a;

    }
    void display()
    {
        cout<<"Fahrenheit:"<<ff<<endl;
    }


};
class celc
{
int cc;
public:
celc(int a=0)
{
    cc=a;

}
void display()
{
    cout<<"Celsius :"<<cc<<endl;
}
operator const frn()
{
    int t=cc*1.8+32;
    return frn(t);

}
};
int main()
{
    celc o1(37);
    frn o2;
    o2=o1;
    o1.display();
    o2.display();

    return 0;
}
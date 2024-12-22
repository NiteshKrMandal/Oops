#include<iostream>
#include<math.h>
using namespace std;
class distance1{
    int feet;
    int inch;
    public:
    distance1(int a,int b)
    {
        feet=a;
        inch=b;
    }
    void display(){
        cout<<feet<<"'"<<inch<<endl;
    }
};
boll distance::operator + (distance d)
{ distance1 p;
p.feet=feet+p.feet;
p.inch=inch+p.inch;
return p;
}
int main()
{
    distance1 d1(5,6),d2(7,3),d3(4,2);
d1=d2+d3;
d1.display();
}
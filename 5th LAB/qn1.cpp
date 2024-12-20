#include<iostream>
using namespace std;
class complex
{
int real;
int img;
public:
complex()
{ real;
img;
}
complex (int i, int j)
{ }
complex (const complex &amp, c1)
{ real=c1.real;
img=c1.img;}
void display(){
}
};
int main()
{
complex c1, c2(4,5);
complex c3(c2);
c1.display();
}
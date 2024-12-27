#include<iostream>
#include<math.h>
using namespace std;
double area(int a,int b,int c,float s){
    double cal=s*(s-a)*(s-b)*(s-c);
cal=sqrtl(cal);
return cal;

}
double area(int a,int b){
double cal=((a*a)-(b*b)/4)*b;
cal=0.5*sqrtl(cal);
return cal;
}
double area(int a){
double cal=0.75;
cal=(sqrtl(cal))*a*a;
return cal;
}

int main(){
    int a,b,c;
    float s;


cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value of b:";
cin>>b;

cout<<"Enter the value of c:";
cin>>c; 
s=(a+b+c)/2;
cout<<"Area of scalene triangle is :"<<area(a,b,c,s)<<endl;
cout<<"Area of isosceles triangle is:"<<area(a,b)<<endl;
cout<<"Area of equilateral triangle is :"<<area(a)<<endl;
return 0;

}
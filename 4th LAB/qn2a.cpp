#include<iostream> 
using namespace std;
 class Met;
  class inc
  {
int feet,inches;
public: 
float total; 
void getdata()
{ 
cout<<"Enter the distance in feet and inches: "<<endl;
cin>>feet; 
cin>>inches; 
total = (feet * 12) + inches; 
total = total * 2.54; }
friend void calc(Met, inc); 
}; 
class Met
{
float met, cent;
public: 
float total; 
void getdata()
{
cout<<"Enter the distance in meters and centimeters: "<<endl; 
   cin>>met; 
  cin>>cent;  
   total = met *100 + cent;
}
 friend void calc(Met, inc);
 }; 
void calc(Met m, inc i)
{
   if(m.total > i.total)
 {
cout<<"The larger of distances is "<<m.met<<" meters and "<<m.cent<<" centimeters."<<endl;
 } 
 else
{
cout<<"The larger of distances is "<<i.feet<<" feet and "<<i.inches<<" inches."<<endl; 
} 
}
int  main()
{
Met m; 
inc i; 
m.getdata(); 
i.getdata(); 
calc(m, i);
return 0; 
}
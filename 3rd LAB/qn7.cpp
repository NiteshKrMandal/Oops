#include<iostream>
#include<math.h>
using namespace std;
int SUM(int x,int y=10,int z=20)
{
    int sum;
    sum=x+y+z;
return sum;
}
int main()
{
   int x,y,z;
    
    cout<<"Sum of 1 no:"<<SUM(5)<<endl;
    cout<<"Sum of 2 no:"<<SUM(5,8)<<endl;
    cout<<"Sum of 3 no:"<<SUM(5,8,7)<<endl;

}


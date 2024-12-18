#include<iostream>
using namespace std;
inline int sqr(int a)
{
   // int square;
   // square=a*a;
    return a*a;
}
inline int cub(int b)
{
    //int cube;
    //cube=b*b*b;
    return b*b*b;;
}
int main()
{
    int num,numb;
    cout<<"Enter the number whose square is required:";
    cin>>num;
    cout<<"Square of number is:"<<sqr(num)<<endl;
    cout<<"Enter the number whose Cube is required:";
    cin>>numb;
    cout<<"Cube of number is:"<<cub(numb)<<endl;
     return 0;
}
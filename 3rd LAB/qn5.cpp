#include<iostream>
 using namespace std;
 inline int inc(int a)
 {
a=a+1;
cout<<"Value after increment:"<<a<<endl;
}
int main(){
int b;
cout<<"Enter the value for increment:";
cin>>b;
inc(b);

return 0;
}
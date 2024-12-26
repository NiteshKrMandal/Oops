#include <iostream>
 using namespace std;
class date
{
private:
    int year,month,day;
public:
 void inputdob(int y1,int m1,int d1 ){
    year=y1;
    month=m1;
    day=d1;
    cout<<"enter the date of birth:"<<endl;
    cout<<"year:";
    cin>>year;
    cout<<"month:";
    cin>>month;
    cout<<"day:";
    cin>>day;

 }
void inputcudob(int y2,int m2,int d2 ){
    year=y2;
    month=m2;
    day=d2;
    cout<<"Enter present date:"<<endl;
    cout<<"year:";
    cin>>year;
    cout<<"month:";
    cin>>month;
    cout<<"day:";
    cin>>day;

 }
 void outputage(date p,date q){
year=q.year-p.year;
if(q.month>=p.month){
    month=q.month-p.month;
}
else if (q.month<p.month){
    year=year-1;
    q.month=q.month+12;
    month=q.month-p.month;

}
if(q.day>=p.day){
    day=q.day-p.day;
}
else if(q.day<p.day){
    month=month-1;
    q.day=q.day+30;
    day=q.day-p.day;
}

 }

void display(){
    cout<<year<<"Year "<<month<<"Month "<<day<<"Day"<<endl;
}

};
 int main(){
class date d1,d2,d3;
int x,y,z;
d1.inputdob(x,y,z);
d2.inputcudob(x,y,z);
d3.outputage(d1,d2);
cout<<"--------"<<endl;
cout<<"Current age is";
d3.display();

return 0;

 }
//program to find greater distsnce
#include<iostream>
using namespace std;
class dist2;
class dist1{
	int feet,inch;
    friend class dist2;
	public:
		void getdata(int x,int y){
			feet=x;
			inch=y;
		}
		void showdata(){
			cout<<feet<<"'"<<inch<<"''"<<endl;
		}
		void add(dist1 p,dist1 q){
			inch=p.inch+q.inch;
			feet=p.feet+q.feet+(inch/12);
			inch=(int)inch%12;
		}
};
        class dist2{
            int meter,cm;
            public:
            void getdata(int a,int b){
            meter=a;
			cm=b;
            }
		void showdata(){
			cout<<meter<<"meter"<<cm<<"Centimeter"<<endl;
		}
		void add(dist2 a,dist2 b){
			meter=a.meter+b.meter;
			cm=a.cm+b.cm+(meter/100);
			meter=(int)meter%100;
		}
        
};
int main(){
	
    dist1 d1,d2,d3;
	d1.getdata(2,11);
	d2.getdata(8,3);
	d3.add(d1,d2);
    cout<<"THE RESULT for feet and inch IS:";
	d3.showdata();
    dist2 d4,d5,d6;
	d4.getdata(2,11);
	d5.getdata(8,103);
	d6.add(d4,d5);
    cout<<"THE RESULT for meter and cm IS:";
	d6.showdata();
}
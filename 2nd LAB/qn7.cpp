#include<iostream>
#include<math.h>
using namespace std;
class ordinates{
	float x,y;
	public:
		void input(float x1,float y1){
			x=x1;
			y=y1;
		}
		void show(){
			cout<<"("<<x<<","<<y<<")"<<endl;
		}
		void calc(ordinates p,ordinates q){
			float dis;
		 dis=sqrt((p.x-q.x)(p.x-q.x)+(p.y-q.y)(p.y-q.y));
		 cout<<"DISTANCE="<<dis;
		}
};
int main(){
	ordinates o1,o2,o3;
	o1.input(7,2);
	o2.input(3,6);
	o1.show();
	o2.show();
	o3.calc(o1,o2);
}
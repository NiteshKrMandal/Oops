#include<iostream>
using namespace std;
class dist{
	int feet,inche;
	public:
		void getdata(int x,int y){
			feet=x;
			inche=y;
		}
		void showdata(){
			cout<<feet<<"'"<<inche<<"''"<<endl;
		}
		void add(dist p,dist q){
			inche=p.inche+q.inche;
			feet=p.feet+q.feet+(inche/12);
			inche=(int)inche%12;
		}
};
int main(){
	dist d1,d2,d3;
	d1.getdata(2,11);
	d2.getdata(8,3);
	d3.add(d1,d2);
    cout<<"THE RESULT IS:";
	d3.showdata();
}
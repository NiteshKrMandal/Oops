#include<iostream>
using namespace std;
class dist2{
	int feet,inche;
	public:
		void getdata(int x,int y){
			feet=x;
			inche=y;
		}
		void showdata(){
			cout<<feet<<" Feet "<<inche<<" Inche "<<endl;
		}
		dist2 add(dist2 m,dist2 n){
			dist2 temp;
			temp.inche=m.inche+n.inche;
			temp.feet=m.feet+n.feet+(inche/12);
			temp.inche=(int)inche%12;
			return temp;
		}
};
int main(){
	dist2 d1,d2,d3;
	d1.getdata(5,9);
	d2.getdata(6,2);
    cout<<"The Result is:";
	d3=d2.add(d1,d2);
	d3.showdata();
}
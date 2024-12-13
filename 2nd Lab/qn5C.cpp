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
			cout<<feet<<" Feet "<<inche<<" Inche"<<endl;
		}
		dist add(dist m){
			dist temp;
			temp.inche=m.inche+inche;
			temp.feet=m.feet+feet+(inche/12);
			temp.inche=(int)inche%12;
			return temp;
		}
};
int main(){
	dist d1,d2,d3;
	d1.getdata(7,6);
	d2.getdata(1,4);
	cout<<"The Result IS: ";
	d3=d2.add(d1);
	d3.showdata();
}
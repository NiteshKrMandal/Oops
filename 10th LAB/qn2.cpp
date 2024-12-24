#include<iostream>
using namespace std;
class time1{
	int hrs;
	int min;
	public:
		time1(int a=0,int b=0){
			hrs=a;
			min=b;
		}
		void display(){
			cout<<hrs<<" HOURS"<<endl;
			cout<<min<<" MINUTES"<<endl;
			cout<<"OUTPUT IN MINUTES\n";
		}
		operator int(){
			
			return ((hrs*60)+min);
		}
};
int main(){
	time1 t1(1,35);
	int duration;
	duration=t1;
	t1.display();
	cout<<duration;
}

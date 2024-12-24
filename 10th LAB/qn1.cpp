#include<iostream>
using namespace std;
class time1{
	int hrs;
	int min;
	public:
		time1(){
		}
		time1(int t){
			hrs=t/60;
			min=t%60;
		}
		void display(){
			cout<<hrs;
           cout<<" HOUR and "<<endl;
			cout<<min;
            cout<<" MINUTES"<<endl;
		}
		operator int(){
			return ((hrs*60)+min);
		}
};
int main(){
	time1 t1;
	int duration;
    cout<<"Enter Duration In Minutes : ";
	cin>>duration;
	t1=duration;
	t1.display();
	// cout<<t1<<endl;
	// printf("\n");
	// int x=t1;
	// printf("%d\n",x);
}

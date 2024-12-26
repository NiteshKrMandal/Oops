#include<iostream>
using namespace std;
class vector{
	double x,y,z;
	public:
		void getdata(){
            cout<<"Enter value of x,y,z"<<endl;
			cin>>x;
			cin>>y;
			cin>>z;
			cout<<"VECTOR: "<<"("<<x<<","<<y<<","<<z<<")"<<endl;
            cout<<"Enter new value of x,y,z"<<endl;
			cin>>x;
			cin>>y;
			cin>>z;
			cout<<"NEW VECTOR: "<<"("<<x<<","<<y<<","<<z<<")"<<endl;
		}
		void mulone(){
			int n;
			char X;
			cout<<"ENTER THE NUMBER YOU WANT TO MULTIPLY:"<<endl;
			cin>>n;
			cout<<"ENTER THE AXIS YOU WANT TO MULTIPLY(x,y or z):"<<endl;
			cin>>X;
			if(X=='x')
			cout<<"("<<x*n<<","<<y<<","<<z<<")"<<endl;
			if(X=='y')
			cout<<"("<<x<<","<<y*n<<","<<z<<")"<<endl;
			if(X=='z')
			cout<<"("<<x<<","<<y<<","<<z*n<<")"<<endl;
		}
		void mulall(){
			int n;
			cout<<"ENTER THE NUMBER YOU WANT TO MULTIPLY EACH AXIS BY:"<<endl;
			cin>>n;
            cout<<"VECTOR AFTER MULTIPLICATION "<<endl;
			cout<<"P("<<x*n<<","<<y*n<<","<<z*n<<")"<<endl;
		}
		void divall(){
			int n;
			cout<<"ENTER THE NUMBER YOU WANT TO DIVIDE EACH AXIS BY:"<<endl;
			cin>>n;
            cout<<"VECTOR AFTER DIVISION TO EACH AXIS:"<<endl;
			cout<<"("<<x/n<<","<<y/n<<","<<z/n<<")"<<endl;
		}
		void addall(){
			int n;
			cout<<"ENTER THE NUMBER YOU WANT TO ADD TO EACH AXIS:"<<endl;
			cin>>n;
            cout<<"NUMBER AFTER ADDITION TO EACH AXIS:"<<endl;
			cout<<"("<<x+n<<","<<y+n<<","<<z+n<<")"<<endl;
		}
};
int main(){
	vector v;
	v.getdata();
	v.mulone();
	v.mulall();
	v.divall();
	v.addall();
}
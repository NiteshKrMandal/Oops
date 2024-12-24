#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream fout;
	fout.open("PLAYER");
	fout<<"VIRAT\n";
	fout<<"SMITH\n";
	fout<<"SAHEEN\n";
	fout.close();
	
	fout.open("COUNTRY");
	fout<<"INDIA\n";
	fout<<"AUSTRALIA\n";
	fout<<"PAKISTAN\n";
	fout.close();
	
	const int N=80;
	char line[N];
	
	ifstream fin;
	fin.open("PLAYER");
	
	while(fin){
		fin.getline(line,N);
		cout<<"-"<<line<<"-"<<endl;
	}
	fin.close();
	
	fin.open("COUNTRY");
	
	while(fin){
		fin.getline(line,N);
		cout<<line<<endl;
	}
	fin.close();
}
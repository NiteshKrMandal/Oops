#include<iostream>
using namespace std;
void menu(){
	cout<<"ITEAM CODE WITH THEIR CODE AND PRICE IS MENTIONED"<<endl;
	cout<<1 <<" PANT CODE PA21Q:1200"<<endl;
	cout<<2 <<" SHEET CODE SH22Q:100"<<endl;
	cout<<3 <<" NOTE BOOK CODE NO21Q:120"<<endl;
	cout<<4 <<" TEL.PHONE CODE PH21Q:1400"<<endl;
	cout<<5 <<" CHARGER CODE CH21Q:800"<<endl;
	cout<<6 <<" BOOK CODE BK21Q:567"<<endl;
	cout<<7 <<" PEN CODE PE21Q:20"<<endl;
	cout<<8 <<" SHOE CODE SH21Q:3300"<<endl;
	cout<<9 <<" SHIRT CODE ST21Q:1020"<<endl;
	cout<<10 <<" POWER BANK CODE PO21Q:1670"<<endl;
}
int main(){
	int a[10],i;
	menu();
	for(i=1;i<=10;i++){
		cout<<"ENTER QUANTITY FOR "<<i<<" ITEM"<<endl;
		cin>>a[i];
	}
    cout<<"................................................................................"<<endl;
	cout<<"SI.NO   "<<"CODE  "<<"NAME       "<<"PRICE   "<<"QUANTITY"<<"\t\t"<<"TOTAL"<<endl;
	cout<<"1.      "<<"PA21Q "<<"RICE       "<<"1200    "<<a[1]<<"\t\t"<<a[1]*200<<endl;
	cout<<"2.      "<<"SH22Q "<<"SHEET      "<<"100     "<<a[2]<<"\t\t"<<a[2]*100<<endl;
	cout<<"3.      "<<"NO21Q "<<"NOTE BOOK  "<<"120     "<<a[3]<<"\t\t"<<a[3]*120<<endl;
	cout<<"4.      "<<"PH21Q "<<"TEL.PHONE  "<<"1400    "<<a[4] <<"\t\t"     <<a[4]*1400<<endl;
	cout<<"5.      "<<"CH21Q "<<"CHARGER    "<<"800     "<<a[5] <<"\t\t"      <<a[5]*800<<endl;
	cout<<"6.      "<<"BK21Q "<<"BOOK       "<<"567     "<<a[6]  <<"\t\t"     <<a[6]*567<<endl;
	cout<<"7.      "<<"PE21Q "<<"PEN        "<<"20      "<<a[7]  <<"\t\t"     <<a[7]*20<<endl;
	cout<<"8.      "<<"SH21Q "<<"SHOE       "<<"3300    "<<a[8]  <<"\t\t"     <<a[8]*3300<<endl;
	cout<<"9.      "<<"SH21Q "<<"SHIRT      "<<"1020    "<<a[9]  <<"\t\t"     <<a[9]*1020<<endl;
	cout<<"10.     "<<"PO21Q "<<"POWER BANK "<<"1670    "<<a[10] <<"\t\t"     <<a[10]*1670<<endl;
    cout<<"................................................................................"<<endl;

    cout<<"\t\t\t\t\t\t\t\t\t\tTOTAL:"<<a[1]*200+a[2]*100+a[3]*100+a[4]*1400+a[5]*800+a[6]*567+a[7]*20+a[8]*3300+a[9]*1020+a[10]*1670;
}
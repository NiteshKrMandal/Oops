#include <iostream>
#include <iomanip>

using namespace std;

int i = 0;
static int total = 0;

class Product
{
private:
    int n;
    string code;
    string name;
    int price;
    int quantity;

public:
    void input()
    {
        getline(cin, code);
        cout << "\nEnter the Code of (" << i + 1 << ") Product      : ";
        getline(cin, code);
        cout << "Enter the Name for (" << i + 1 << ") Product     : ";
        getline(cin, name);
        cout << "Enter the Price for (" << i + 1 << ") Product    : ";
        cin >> price;
        cout << "Enter the Quantity for (" << i + 1 << ") Product : ";
        cin >> quantity;
        total += (price * quantity);
    }

    void output()
   {
       
        cout << left << setw(8) <<i + 1 
             << left << setw(8) << code
             << left << setw(10) << name
             << left << setw(10) << price
             << left << setw(11) << quantity
             << left << setw(5) << (price * quantity) << endl;
    }
};
int main()
{
    int n;
    cout << "\nEnter the No of Product: ";
    cin >> n;
    Product ob[n];
    for (i = 0; i < n; i++)
    {
        ob[i].input();
    }
    cout<<"\n---------------------------------------------------------------\n";
    cout << "\nSI.No.  Code    Name    Price    Quantity     Total \n";
    for (i = 0; i < n; i++)
    {
        ob[i].output();
    }
    cout<<"---------------------------------------------------------------\n";

    cout << "\n\t\t\tTotal = Rs." << total << "/-" << endl;
    return 0;
}
#include<iostream>
#include<string.h>
using namespace std;
class book
{
    string name;
    string author;
    float price;

public:
    void input()
    {
        cout << "Enter the name of book:";
        cin >> name;
        cout << "Enter the name of author:";
        cin >> author;
        cout << "Enter the number of price:";
        cin >> price;
    }
    friend void printrange(book *p, int n, int lower, int upper);
};

void printrange(book *p, int n, int lower, int upper)
{

    cout << "Enter the lower price:";
    cin >> lower;
    cout << "Enter the upper price:";
    cin >> upper;
    cout << "\n-------------------------DETAILS OF BOOKS IN A GIVEN PRICE RANGE-----------\n";
    cout<< "|S.NO|\t\t"<< "NAME OF THE BOOK"<<"\t\t\tNAME OF THE AUTHOR" <<"\t\t\tPRICE OF BOOK" << endl;

    for (int i = 0; i < n; i++)
    {

        if (p[i].price >= lower && p[i].price <= upper)
        {

            cout << "|  " << i + 1 << "  |" <<"\t\t"<< p[i].name << "|" <<"\t\t\t"<< p[i].author << "|" <<"\t\t"<< p[i].price << "|";

                 cout<<"BOOK NO:"<<i+1<<endl;
                cout<<"Name of the book:"<<p[i].name<<endl;
                cout<<"Name of the author:"<<p[i].author<<endl;
                cout<<"Price of the book:"<<p[i].price<<endl;
        }
        cout << endl;
    }
}

int main()
{

    int n, lower, upper;
    cout << "Enter the number of books:";
    cin >> n;
    book p[n];
    cout << "\n-----------------INPUT THE DETAILS OF BOOKS-------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "BOOK NO:" << i + 1 << endl;
        p[i].input();
    }
    printrange(p, n, lower, upper);
}
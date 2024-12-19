#include <iostream>
using namespace std;
class students
{
    string name;
    int roll;
    int total;
    static float avgMarks;

public:
    void getdata()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll: ";
        cin >> roll;
        cout << "Enter Total Marks: ";
        cin >> total;
    }
    static void display(students obj[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            avgMarks = avgMarks + obj[i].total;
        }
        cout << "\nAverage marks of the students : " << (avgMarks / n);
    }
};
float students::avgMarks = 0;
int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    students ob[n];
    for (int i = 0; i < n; i++)

    {
        cout<<"student no:"<<i+1<<endl;
        ob[i].getdata();
    }
    cout << "\n";
    students::display(ob, n);

    return 0;
}
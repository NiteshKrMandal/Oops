#include <iostream>
using namespace std;
class stud
{
private:
    string name;
    int roll;
    int marks[5];
    float avg;
    int tot;

public:
    void setdata(string n, int r, int m[5])
    {
        name = n;
        roll = r;
        tot = 0;
        for (int i = 0; i < 5; i++)
        {
            marks[i] = m[i];
            tot += m[i];
        }
        avg = tot / 5.0;
    }
    void average(int n, stud ob[])
    {
        float sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += ob[i].avg;
        }
        avg = sum / n;
    }
    void below(int n, stud ob[])
    {
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            if (ob[i].avg < avg)
            {
                ct++;
            }
        }
        cout << "No of students with below-average marks : " << ct << endl;
    }
    void above(int n, stud ob[])
    {
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            if (ob[i].avg > avg)
            {
                ct++;
            }
        }
        cout << "No of students with above-average marks : " << ct << endl;
    }
    void sort(int n, stud ob[])
    {
        for (int i = 0; i < n; ++i)
        {

            for (int j = i + 1; j < n; ++j)
            {

                if (ob[i].tot > ob[j].tot)
                {

                    stud a = ob[i];
                    ob[i] = ob[j];
                    ob[j] = a;
                }
            }
        }
    }
    void display_name()
    {
        cout << "Name of student who secured the highest marks : " << name << endl;
    }
    void display_roll()
    {
        cout << "Roll no of student who secured the highest marks from bottom : " << roll << endl;
    }
};
int main()
{
    string n;
    int r, m[5], s;
    cout << "Enter the no of students :\n";
    cin >> s;
    stud ob[s], ag;
    for (int i = 0; i < s; i++)
    {
        cout << "Enter Name :\n";
        cin >> n;
        cout << "Enter Roll no :\n";
        cin >> r;
        cout << "Enter marks in 5 subjects :\n";
        for (int i = 0; i < 5; i++)
        {
            cin >> m[i];
        }
        ob[i].setdata(n, r, m);
    }
    ag.average(s, ob);
    ag.above(s, ob);
    ag.below(s, ob);
    ag.sort(s, ob);
    ob[s - 1].display_name();
    ob[0].display_roll();
}
#include <iostream>
using namespace std;
class poly
{
private:
    float x[50];
    int no;

public:
    inline void setdata(int arr[], int n);
    void add(poly p1, poly p2);
    void multiply(poly p1, poly p2);
    void display();
};
inline void poly::setdata(int arr[], int n)
{
    for (int i = 0; i < 50; i++)
    {
        x[i] = 0;
    }
    no = n;
    for (int i = 0; i < n; i++)
    {
        x[i] = arr[i];
    }
}
inline void poly::add(poly p1, poly p2)
{
    for (int i = 0; i < 50; i++)
    {
        x[i] = 0;
    }
    no = max(p1.no, p2.no);
    for (int i = 0; i < no; i++)
    {
        x[i] = p1.x[i] + p2.x[i];
    }
}
inline void poly::multiply(poly p1, poly p2)
{
    for (int i = 0; i < 50; i++)
    {
        x[i] = 0;
    }
    for (int i = 0; i < p1.no; i++)
    {
        for (int j = 0; j < p2.no; j++)
        {
            int k = i + j;
            x[k] += p1.x[i] * p2.x[j];
        }
    }
    no = p1.no * p2.no;
}
inline void poly::display()
{
    for (int i = 0; i < no; i++)
    {
        if (x[i] != 0)
        {
            cout << x[i] << "x^" << i << " ";
        }
    }
    cout << endl;
}
int main()
{
    poly p[2], sum, prod;
    int n;
    cout << "Enter the no of terms in the first polynomial:\n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the coefficients of x raised to the power " << i << endl;
        cin >> arr[i];
    }
    int m;
    cout << "Enter the no of terms in the second polynomial:\n";
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cout << "Enter the coefficients of x raised to the power " << i << endl;
        cin >> arr2[i];
    }
    p[0].setdata(arr, n);
    p[1].setdata(arr2, m);
    sum.add(p[0], p[1]);
    prod.multiply(p[0], p[1]);
    cout << "First Polynomial :\n";
    p[0].display();
    cout << "Second Polynomial :\n";
    p[1].display();
    cout << "Sum : ";
    sum.display();
    cout << "Product : ";
    prod.display();
}
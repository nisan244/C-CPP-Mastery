#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    char name[100];
    int roll;
    int section;
    int math_marks;
    int cls;
};
int main()
{

    student a;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.section >> a.math_marks >> a.cls;
    getchar();
    student b;
    cin.getline(b.name, 100);
    cin >> b.roll >> b.section >> b.math_marks >> b.cls;
    getchar();

    student c;
    cin.getline(c.name, 100);
    cin >> c.roll >> c.section >> c.math_marks >> c.cls;
    int marks = max({a.math_marks, b.math_marks, c.math_marks});
    cout << a.name << " " << a.roll << " " << a.section << " " << a.math_marks << " " << a.cls << endl;
    cout << b.name << " " << b.roll << " " << b.section << " " << b.math_marks << " " << b.cls << endl;
    cout << c.name << " " << c.roll << " " << c.section << " " << c.math_marks << " " << c.cls << endl;
    if (marks == b.math_marks)
    {
        cout << b.name << endl;
    }
    else if (marks == c.math_marks)
    {
        cout << c.name << endl;
    }
    else if (marks == a.math_marks)
    {
        cout << a.name << endl;
    }
    cout << marks << endl;
    return 0;
}
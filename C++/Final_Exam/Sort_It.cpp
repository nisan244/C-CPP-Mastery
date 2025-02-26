#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;

    int sum(int m_marks, int e_marks)
    {
        int total_marks = math_marks + eng_marks;
        return total_marks;
    }
};
bool cmp(Student a, Student b)
{
    if ((a.sum(a.math_marks, a.eng_marks)) > (b.sum(a.math_marks, a.eng_marks)))
    {
        return true;
    }
    else if ((a.sum(a.math_marks, a.eng_marks)) == (b.sum(a.math_marks, a.eng_marks)))
    {
        // if (a.id < b.id)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
        return a.id < b.id;
    }
    else
    {
        return false;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    Student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].nm >> ar[i].cls >> ar[i].s >> ar[i].id >> ar[i].math_marks >> ar[i].eng_marks;
    }

    sort(ar, ar + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].nm << " " << ar[i].cls << " " << ar[i].s << " " << ar[i].id << " " << ar[i].math_marks << " " << ar[i].eng_marks << endl;
        // cout << ar[i].sum(ar->math_marks, ar->eng_marks) << endl;
    }

    return 0;
}

// DONE
// Accepted
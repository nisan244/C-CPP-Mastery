#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int ID;
    char name[100];
    char section;
    int total_marks;
};

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {

        Student A, B, C;

        // Student A;
        cin >> A.ID >> A.name >> A.section >> A.total_marks;

        // Student B;
        cin >> B.ID >> B.name >> B.section >> B.total_marks;

        // Student C;
        cin >> C.ID >> C.name >> C.section >> C.total_marks;

        int value = max({A.total_marks, B.total_marks, C.total_marks});

        if (value == A.total_marks)
        {
            cout << A.ID << " " << A.name << " " << A.section << " " << A.total_marks << endl;
        }
        else if (value == B.total_marks)
        {
            cout << B.ID << " " << B.name << " " << B.section << " " << B.total_marks << endl;
        }
        else
        {
            cout << C.ID << " " << C.name << " " << C.section << " " << C.total_marks << endl;
        }
    }

    return 0;
}


// DONE
// Accepted
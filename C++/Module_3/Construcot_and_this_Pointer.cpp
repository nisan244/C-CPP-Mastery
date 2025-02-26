// // 3-5 Constructor and this Pointer with Arrow Sign

// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     int roll;
//     int cls;
//     double cgpa;

//     Student(int r, int c, double cg)
//     {
//         roll = r;
//         cls = c;
//         cgpa = cg;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Student nisan(24, 10, 3.95);
//     Student ariyan(20, 25, 3.58);

//     cout << nisan.roll << " " << nisan.cls << " " << nisan.cgpa << endl;
//     cout << ariyan.roll << " " << ariyan.cls << " " << ariyan.cgpa << endl;

//     return 0;
// }

//----------------------------------

// 3-5 Constructor and this Pointer with Arrow Sign

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double cgpa;

    Student(int roll, int cls, double cgpa)
    {
        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).cgpa = cgpa;

        //----- Another way --------

        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};

int main(int argc, char const *argv[])
{
    Student nisan(24, 10, 3.95);
    Student ariyan(20, 25, 3.58);

    cout << nisan.roll << " " << nisan.cls << " " << nisan.cgpa << endl;
    cout << ariyan.roll << " " << ariyan.cls << " " << ariyan.cgpa << endl;

    return 0;
}

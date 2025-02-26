// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     int roll;
//     int cls;
//     double gpa;
//     Student(int roll, int cls, double gpa)
//     {
//         this->roll = roll;
//         this->cls = cls;
//         this->gpa = gpa;
//     }
// };
// Student *fun()
// {
//     Student *result = new Student(24, 5, 4.85);
//     return result;
// }

// int main(int argc, char const *argv[])
// {
//     // Student nisan(24, 5, 4.85);
//     Student *ariyan = new Student(24, 5, 4.85);

//     cout << ariyan->roll << " " << ariyan->cls << " " << ariyan->gpa << endl;

//     return 0;
// }


//------------------- Others ----------------------



#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student *fun()
{
    Student *result = new Student(24, 5, 4.85);
    return result;
}

int main(int argc, char const *argv[])
{
    // Student nisan(24, 5, 4.85);
    // Student *ariyan = new Student(24, 5, 4.85);
    Student *value = fun();

    cout << value->roll << " " << value->cls << " " << value->gpa << endl;
    delete value;
    // cout << value->roll << " " << value->cls << " " << value->gpa << endl;


    return 0;
}



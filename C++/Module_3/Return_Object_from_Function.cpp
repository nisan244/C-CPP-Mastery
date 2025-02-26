// 3-6 Return Object from Function and Why We Need Dynamic Object

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

Student fun()
{
    Student nisan(24, 5, 4.85);
    return nisan;
}

int main(int argc, char const *argv[])
{
    Student result = fun();
    cout << result.roll << " " << result.cls << " " << result.gpa << endl;

    return 0;
}

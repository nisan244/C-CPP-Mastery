// 3-3 How to Create Class and Object in C++ and Snippet Settings

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main(int argc, char const *argv[])
{
    Student N, M;
    // N.roll = 24;
    // N.cgpa = 3.95;
    // char temp[100] = "Nisan";
    // strcpy(N.name, temp);

    //------ Input way ------------

    cin.getline(N.name, 100);
    cin >> N.roll >> N.cgpa;
    getchar();

    cin.getline(M.name, 100);
    cin >> M.roll >> M.cgpa;

    cout << N.name << " " << N.roll << " " << N.cgpa << endl;
    cout << M.name << " " << M.roll << " " << M.cgpa << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// class Person
// {
// public:
//     string name;
//     int age;
//     Person(string nm, int ag)
//     {
//         name = nm;
//         age = ag;
//     }
//     void hello()
//     {
//         cout << "Hello" << endl;
//         cout << name << " " << age << endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Person nisan("Nisan Hossain", 21);
//     nisan.hello();

//     return 0;
// }



//--------------------------------

#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int marks_1;
    int marks_2;
    Person(string nm, int ag, int m1, int m2)
    {
        name = nm;
        age = ag;
        marks_1 = m1;
        marks_2 = m2;
    }
    void hello()
    {
        cout << "Hello" << endl;
        cout << name << " " << age << endl;
    }
    int total_marks()
    {
        return marks_1 + marks_2;
    }
};

int main(int argc, char const *argv[])
{
    Person nisan("Nisan Hossain", 21, 50, 40);
    nisan.hello();
    cout << nisan.total_marks() << endl;

    return 0;
}

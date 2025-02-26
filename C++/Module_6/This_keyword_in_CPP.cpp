// 6-6 This Keyword in C-- (Recap)

#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main(int argc, char const *argv[])
{
    Person nisan("Nisan Hossain", 25);
    cout << nisan.name << " " << nisan.age << endl;

    return 0;
}

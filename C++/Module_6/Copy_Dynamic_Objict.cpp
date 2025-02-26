// 6-7 Copy Dynamic Object

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
    Person *nisan = new Person("Nisan Hossain", 25);    
    Person *ariyan = new Person("Abrar Ariyan", 20);    

    *nisan = *ariyan;
//---------- Or -------------
    // nisan->name = ariyan->name;
    // nisan->age = ariyan->age;



    delete ariyan;


    cout << nisan->name << " " << nisan->age << endl;


    return 0;
}

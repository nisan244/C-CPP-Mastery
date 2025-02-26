// 6-8 Namespaces in C--

#include <bits/stdc++.h>
using namespace std;

namespace nisan
{
    int age = 20;
    void fun()
    {
        cout << "Nisan namespaces" << endl;
    }
}

namespace ariyan
{
    int age_2 = 25;
    int age = 10;
    void fun()
    {
        cout << "ariyan namespaces" << endl;
    }
}
using namespace nisan;
// using namespace ariyan;

int main(int argc, char const *argv[])
{
    // cout << nisan::age <<endl;
    // cout << ariyan::age_2 <<endl;
    cout << age << endl;
    fun();
    ariyan::fun();
    // cout << age_2 << endl;

    return 0;
}

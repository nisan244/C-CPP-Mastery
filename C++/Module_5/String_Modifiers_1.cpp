#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // string a = "Nisan";
    // string b = "Hossain";

//-----------------------
    // a = a + b;
//------ Or ------------
    // a.append(b);
//-----------------------

    // a.push_back('M');
    // cout << a << endl;
    // a.pop_back();
    // cout << a << endl;

    // cout << a << endl;
    // cout << b << endl;


    // a = "Ariyan";
    // a.assign("Ariyan");
    // cout << a << endl;

//------------------------------------
    // string a = "NisanHossain";

    // a.erase(4,1);
    // cout << a << endl;
//------------------------------------
    string a = "NisanHossain";

    a.replace(4, 3, "Mus");
    a.replace(5, 0, "Mus");

    // a.insert(5,"Masuma");

    cout << a << endl;







    return 0;
}

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    if (a == 10)
    {
        cout << "It is ten out of ten\n";
    }
    else
    {
        cout << "This is not ten\n";
    }


//--------------- Ternary Operator -----------------
    
    (a == 10) ? cout << "True\n" : cout << "False\n";


    return 0;
}

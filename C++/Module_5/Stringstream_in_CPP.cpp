// 5-8 Stringstream in C++

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string a;
    getline(cin, a);

    stringstream ar(a); // ar << a
    string word;
    int count = 0;
    while (ar >> word)
    {
        cout << word << endl;
        count++;
    }
    cout << count << endl;

    return 0;
}

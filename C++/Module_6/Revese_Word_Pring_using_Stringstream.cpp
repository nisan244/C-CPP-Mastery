// 6-4 Reverse Word Printing using Stringstream

#include <bits/stdc++.h>
using namespace std;

void print(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        print(ss);
        cout << word << endl;
    }
}

int main(int argc, char const *argv[])
{
    string a;
    getline(cin, a);

    stringstream ss(a);
    // string word;
    // while (ss >> word)
    // {
    //     cout << word << endl;
    // }
    print(ss);

    return 0;
}

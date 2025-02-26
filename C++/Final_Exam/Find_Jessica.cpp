#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string S;
    getline(cin, S);

    stringstream ar(S); // ar << a
    string word;
    int flag = 0;

    while (ar >> word)
    {
        if (word == "Jessica")
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}


// DONE
// Accepted
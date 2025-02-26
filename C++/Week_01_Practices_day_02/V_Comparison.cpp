#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int A, B;
    char S;
    cin >> A >> S >> B;

    if (A > 0 && B > 0)
    {
        if (S == '=' && A == B)
        {
            cout << "Right" << endl;
        }

        else if (S == '>' && A > B)
        {
            cout << "Right" << endl;
        }

        else if (S == '<' && A < B)
        {
            cout << "Wrong" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else
    {
        if (S == '=' && A == B)
        {
            cout << "Right" << endl;
        }

        else if (S == '>' && A > B)
        {
            cout << "Right" << endl;
        }

        else if (S == '<' && A < B)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }

    return 0;
}

// DONE
// Accepted

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;

    if (S == '-' && Q == '=' && (A - B) == C)
    {
        cout << "Yes" << endl;
    }
    else if (S == '-' && Q == '=' && (A - B) != C)
    {
        cout << A - B << endl;
    }

    if (S == '+' && Q == '=' && (A + B) == C)
    {
        cout << "Yes" << endl;
    }
    else if (S == '+' && Q == '=' && (A + B) != C)
    {
        cout << A + B << endl;
    }

    if (S == '*' && Q == '=' && (A * B) == C)
    {
        cout << "Yes" << endl;
    }
    else if (S == '*' && Q == '=' && (A * B) != C)
    {
        cout << A * B << endl;
    }

    return 0;
}


// DONE
// Accepted

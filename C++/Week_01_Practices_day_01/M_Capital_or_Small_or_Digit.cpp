#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char n;
    cin >> n;
    if (n >= 'a' && n <= 'z')
    {
        cout << "ALPHA\nIS SMALL";
    }
    else if (n >= 'A' && n <= 'Z')
    {
        cout << "ALPHA\nIS CAPITAL";
    }
    else
    {
        cout << "IS DIGIT";
    }

    return 0;
}

// DONE
// Accepted
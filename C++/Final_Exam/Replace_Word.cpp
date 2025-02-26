#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        string S, X;
        cin >> S >> X;

        int ar = S.find(X);

        while (ar < S.length())
        {
            S.replace(ar, X.size(), "#");
            ar = S.find(X, ar + 1);
        }

        cout << S << endl;
    }
    return 0;
}


// DONE
// Accepted
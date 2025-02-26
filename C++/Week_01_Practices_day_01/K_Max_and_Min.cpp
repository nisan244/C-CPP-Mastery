#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int A, B, C;
    cin >> A >> B >> C;

    int mn = min({A, B, C});
    int mx = max({A, B, C});
    cout << mn << " " << mx << endl;

    return 0;
}

// DONE
// Accepted
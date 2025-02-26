#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    long long int ar[n];
    long long int mn = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mn = max(mn, ar[i]);
    }

    cout << mn << endl;

    return 0;
}

// DONE
// Accepted
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    char ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    sort(ar, ar + n);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    getchar();

    cout << "\n" << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int *sort_it(int n)
{
    int *ar = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n, greater<long long int>());
    return ar;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int *ar = sort_it(n);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;

    return 0;
}

//DONE
// Accepted
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int n;
    cin >> n;

    char ar[n];
    long long int i, j;
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    // sort(ar, ar + n);

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                char temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << ar[i];
    }

    return 0;
}

// long long int count[n] = {0};
// for (int i = 0; i < n; i++)
// {
//     count[ar[i]]++;
// }

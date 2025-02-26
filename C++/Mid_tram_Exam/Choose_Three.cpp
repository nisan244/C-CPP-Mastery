#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    for (int p = 0; p < T; p++)
    {
        int n, S;
        cin >> n >> S;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int flag = 0;
        long long int sum = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    sum = arr[i] + arr[j] + arr[k];
                    if (sum == S)
                    {
                        flag = 1;
                    }
                }
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
    }

    return 0;
}

// DONE
// Accepted
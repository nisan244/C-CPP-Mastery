#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    long long int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int i = 0, j = n - 1;
    int flag = 1;
    while (i < j)
    {
        if (ar[i] != ar[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if (flag == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}

// DONE
// Accepted


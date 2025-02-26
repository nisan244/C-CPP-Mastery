// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     long long int n;
//     cin >> n;

//     long long int sum = 0;
//     for (long long int i = n; i >= 1; i--)
//     {
//         sum += i;
//     }
//     cout << sum << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int n;
    cin >> n;

    long long int sum = 0, i;

    for (i = 0; i < n; i++)
    {
        sum = (n * (n + 1)) / 2;
    }

    cout << sum << endl;

    return 0;
}

// void fun(int i, int n)
// {
//     if (i == n + 1)
//     {
//         return;
//     }
//     fun(i + 1, n);

//     cout << i << endl;

//     // printf("%d\n", i);
// }

//------------

// #include <stdio.h>

// void fun(int i, int n)
// {
//     if (i == n + 1)
//     {
//         return;
//     }

//     printf("%d\n", i);
//     fun(i + 1, n);
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     scanf("%d", &n);
//     fun(1, n);

//     return 0;
// }

// DONE
//  Accepted
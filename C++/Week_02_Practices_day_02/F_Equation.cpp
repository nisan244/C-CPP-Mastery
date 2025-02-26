#include <bits/stdc++.h>
using namespace std;

// int sum(int X, int n)
// {
//     int value = 0;
//     for (int i = 2; i <= n; i += 2)
//     {
//         value += pow(X, i);
//     }
//     return value;

// }

int main(int argc, char const *argv[])
{
    int X, n;
    cin >> X >> n;
    int sum = 2;

    for (int i = 2; i <= n; i += 2)
    {
        // sum += pow(X, i);
        sum += pow(X, i);
        // sum += n;
        // n *= X;
    }
    // cout << sum(X, n)+2 << endl;
    cout << sum << endl;

    return 0;
}




//-------------------------


#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int X, n;
    cin >> X >> n;
    int sum = 2;

    for (int i = 2; i <= n; i += 2)
    {
        sum += pow(X, i);
    }
    cout << sum << endl;

    return 0;
}

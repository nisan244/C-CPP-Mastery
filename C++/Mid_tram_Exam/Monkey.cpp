#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char ar[1000000];

    while (cin.getline(ar, 1000000))
    {
        int n = strlen(ar);

        sort(ar, ar + n);
        for (int i = 0; i < n; i++)
        {
            if (ar[i] != ' ')
            {
                cout << ar[i];
            }
        }
        cout << endl;
    }

    return 0;
}

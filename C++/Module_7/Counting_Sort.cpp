// 7-6 Counting Sort

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string n;
    cin >> n;

    int arr[26] = {0};
    for (char c : n)
    {
        arr[c - 'a']++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        // if (frq[i] > 0)
        // {
        //     cout << i << " - " << frq[i - 'a'] << endl;
        // }
        for (int j = 0; j < arr[i - 'a']; j++)
        {
            // cout << i << endl;
            cout << i;
        }
        
    }

    return 0;
}

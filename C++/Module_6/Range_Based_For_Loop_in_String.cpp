// 6-3 Range Based For Loop in String

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string a;
    cin >> a;

    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i] << endl;
    // }

    for(char i : a)
    {
        cout << i << endl;
    }
    


    return 0;
}

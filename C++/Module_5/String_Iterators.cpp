#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // string a;
    // cin >> a;
    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i] << endl;
    // }

    // cout << *a.begin() << endl;
    // cout << *(a.end()-1) << endl;

//------------------------------------

    string a;
    // string::iterator it;
    cin >> a;

    for(auto it = a.begin(); it < a.end(); it++)
    // for(string::iterator it = a.begin(); it < a.end(); it++)
    // for(it = a.begin(); it < a.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}

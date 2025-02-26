#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string ar;
    getline(cin, ar);
    bool inside_word = false;
    int count = 0;

    for (char c : ar)
    {
        if (isalpha(c))
        {
            if (inside_word == false)
            {
                count++;
            }
            inside_word = true;
        }
        else
        {
            inside_word = false;
        }
    }
    cout << count << endl;

    return 0;
}

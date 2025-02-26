#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    Student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].nm >> ar[i].cls >> ar[i].s >> ar[i].id;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(ar[i].s, ar[j].s);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].nm << " " << ar[i].cls << " " << ar[i].s << " " << ar[i].id << endl;
    }

    return 0;
}


// DONE
// Accepted
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int min_year = INT_MAX;
    // int min_year = 10000;

    for (int year = n + 1; year <= 9000; ++year)
    {
        vector<int> digits;
        // int digits;
        int num = year;

        while (num > 0)
        {
            digits.push_back(num % 10);
            num /= 10;
        }

        sort(digits.begin(), digits.end());
        digits.erase(unique(digits.begin(), digits.end()), digits.end());

        if (digits.size() == 4 && year < min_year)
        {
            min_year = year;
        }
    }

    cout << min_year << endl;

    return 0;
}

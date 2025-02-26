// #include <iostream>
// #include <climits>

// using namespace std;

// // Function to calculate the smallest possible sum for a given array
// int smallestSum(int N, int arr[]) {
//     int minSum = INT_MAX;  // Initialize minSum to maximum possible integer value

//     for (int i = 0; i < N; ++i) {
//         for (int j = i + 1; j < N; ++j) {
//             int currentSum = arr[i] + arr[j] + j - i;
//             minSum = min(minSum, currentSum);
//         }
//     }

//     return minSum;
// }

// int main() {
//     int T;
//     cin >> T;  // Number of test cases

//     for (int t = 0; t < T; ++t) {
//         int N;
//         cin >> N;  // Number of elements in the array

//         int arr[N];
//         for (int i = 0; i < N; ++i) {
//             cin >> arr[i];  // Array elements
//         }

//         int result = smallestSum(N, arr);
//         cout << result << endl;
//     }

//     return 0;
// }

//------------------

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;

    for (int k = 0; k < T; k++)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int min_sum = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = arr[i] + arr[j] + j - i;
                min_sum = min(min_sum, sum);
            }
        }

        cout << min_sum << endl;
    }

    return 0;
}

//DONE
// Accepted








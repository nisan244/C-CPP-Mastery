// // 7-3 Sort Array of Objects using Selection Sort

// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int roll;
//     int marks;
// };

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;

//     Student ar[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> ar[i].name >> ar[i].roll >> ar[i].marks;
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (ar[i].marks < ar[j].marks)
//             {
//                 swap(ar[i], ar[j]);
//             }
//         }
//     }
//     cout << endl;

//     for (int i = 0; i < n; i++)
//     {
//         cout << ar[i].name << " " << ar[i].roll << " " << ar[i].marks << endl;
//     }

//     return 0;
// }

// 5
// Rifat 10 89
// Sifat 11 90
// Akib 12 95
// Sakib 13 85
// Rikib 9 91






//------------------------------------------------------------------------------





// 7-3 Sort Array of Objects using Selection Sort

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    Student ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].roll >> ar[i].marks;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i].marks < ar[j].marks)
            {
                swap(ar[i], ar[j]);
            }
            else if (ar[i].marks == ar[j].marks)
            {
                if(ar[i].roll > ar[j].roll)
                {
                    swap(ar[i], ar[j]);
                }
            }
            
        }
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].roll << " " << ar[i].marks << endl;
    }

    return 0;
}

// 5
// Rifat 10 89
// Sifat 11 90
// Akib 12 95
// Sakib 13 85
// Rikib 9 91

// 5
// Rifat 10 89
// Sifat 11 90
// Akib 12 95
// Sakib 13 90
// Rikib 9 91
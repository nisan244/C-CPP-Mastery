#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    long long int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student a, Student b)
{
    if (a.eng_marks > b.eng_marks)
    {
        return true;
    }
    else if(a.eng_marks < b.eng_marks)
    {
        return false;
    }
    else
    {
        if(a.math_marks > b.math_marks)
        {
            return true;
        }
        else if(a.math_marks < b.math_marks)
        {
            return false;
        }
        else
        {
            return a.id < b.id;
        }
    }

}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    Student *ar = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].nm >> ar[i].cls >> ar[i].s >> ar[i].id >> ar[i].math_marks >> ar[i].eng_marks;
    }

    sort(ar, ar + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].nm << " " << ar[i].cls << " " << ar[i].s << " " << ar[i].id << " " << ar[i].math_marks << " " << ar[i].eng_marks << endl;
        // cout <<ar[i].id << " " << ar[i].math_marks << " " << ar[i].eng_marks << endl;
    }
    delete[] ar;

    return 0;
}

//DONE
//Accepted






// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int cls;
//     char s;
//     long long int id;
//     int m_marks;
//     int e_marks;
// };

// bool cmp(Student a, Student b)
// {
//     if (a.e_marks > b.e_marks)
//     {
//         return true;
//     }
//     else if (a.e_marks == b.e_marks)
//     {
//         return a.m_marks > b.m_marks;
//         if (a.m_marks == b.m_marks)
//         {
//             return a.id < b.id;
//         }
//     }
//     else
//     {
//         return false;
//     }
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;

//     Student ar[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> ar[i].name >> ar[i].cls >> ar[i].s >> ar[i].id >> ar[i].m_marks >> ar[i].e_marks;
//     }

//     sort(ar, ar + n, cmp);

//     for (int i = 0; i < n; i++)
//     {
//         cout << ar[i].name << " " << ar[i].cls << " " << ar[i].s << " " << ar[i].id << " " << ar[i].m_marks << " " << ar[i].e_marks << endl;
//     }

//     return 0;
// }

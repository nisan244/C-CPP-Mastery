// 2-3 Create Dynamic Array and Return Array From Function



// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int *a = new int [5];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << endl;
//     }
    

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int * fun()
{
    // int a[5] = {10, 20, 30, 40 ,50};
    int *a = new int [5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    
    return a;
}

int main(int argc, char const *argv[])
{
    int *a = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    

    return 0;
}

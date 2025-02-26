// 1-7 min(), max() and swap() Functions in C++


// #include <iostream>
// #include <algorithm>  // min  , max
// using namespace std;

// int main(int argc, char const *argv[])
// {

//     // int a, b;
//     // cin >> a >> b;
//     // if (a < b)
//     // {
//     //    cout << a;
//     // }
//     // else
//     // {
//     //     cout << b;
//     // }

//     //--------- User function ---------------

//     // int a, b;
//     // cin >> a >> b;

//     // int c = min(a, b);
//     // int d = max(a, b);

//     // cout << c << " " << d << endl;

//     // int a, b, c, d;
//     // cin >> a >> b >> c >> d;

//     // int mn = min({a, b, c, d});
//     // int mx = max({a, b, c, d});

//     // cout << mn << " " << mx << endl;

//     //---------------- Swip --------------

//     int a, b;
//     cin >> a >> b;

//     return 0;
// }

//-----------------------------------

// #include <iostream>
// #include <algorithm>
// using namespace std;

// void my_swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(int argc, char const *argv[])
// {

//     int a, b;
//     cin >> a >> b;

//     my_swap(&a, &b);
//     cout << a << " " << b << endl;

//     return 0;
// }

//--------------------------

#include <iostream>
// #include <algorithm>
// #include <utility>
using namespace std;

int main(int argc, char const *argv[])
{

    int a, b;
    cin >> a >> b;

    swap(a, b);

    cout << a << " " << b << endl;

    return 0;
}

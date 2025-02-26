// #include <iostream>
// #include <iomanip> // For Setprecision 
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // char a, b;
//     int a, b;
//     while (cin >> a >> b)
//     {
//         cout << a << " " << b << endl;
//     }




// //-------------------- Setprecision -------------------

//     // double a;
//     // cin >> a;
//     // // cout << a << endl;
//     // cout <<fixed << setprecision(2) << a << endl;
    

//     return 0;
// }


#include <iostream>
#include <algorithm>  // min  , max

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << endl;
    cout << a << " " << b << " " << c << " " << d << endl;
    // int mn = min(a, b);
    // int mx = max(a, b);
    int mn = min({a, b, c, d});
    int mx = max({a, b, c, d});
    cout << mn << " " << mx << endl;
    
    return 0;
}

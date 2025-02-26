#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int a = 2;
    // switch (a)
    // {
    // case 1:
    //     cout << "One\n";
    //     break;

    // case 2:
    //     cout << "Two\n";
    //     break;

    // case 3:
    //     cout << "Three\n";
    //     break;

    // case 4:
    //     cout << "Four\n";
    //     break;

    // case 5:
    //     cout << "Five\n";
    //     break;

    // default:
    //     cout << "Nothing\n";
    //     break;
    // }

//--------------------------


    int x = 10;
    switch (x % 2)
    {
    case 0:
        cout << "Even\n";
        break;
    case 1:
        cout << "Odd\n";
        break;
    
    default:
        cout << "Nothing\n";
        break;
    }



    char n;
    cin>> n;
    switch (n)
    {
    case 'a':  // if(n == 'a')
        cout << "Vowel\n";
        break;
    
    case 'e':
        cout << "Vowel\n";
        break;
    
    case 'i':
        cout << "Vowel\n";
        break;
    
    case 'o':
        cout << "Vowel\n";
        break;
    
    case 'u':
        cout << "Vowel\n";
        break;
    
    default:
        cout << "Consonant\n";
        break;
    }


    return 0;
}

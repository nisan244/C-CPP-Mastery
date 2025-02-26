// 2-4 Increase Size of Array and Delete Dynamic Memory

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int *a = new int[3]; // Dynamic Array or Heap Memory
    int *b = new int[3]; // Dynamic Array

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    delete[] a;

    a = new int[5];
    for (int i = 0; i < 3; i++)
    {
        a[i] = b[i];
    }
    delete[] b;
    a[3] = 40;
    a[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

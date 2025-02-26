// 17-7 Length of a String using Recursion

#include <stdio.h>

int fun(char ar[], int i)
{
    if (ar[i] == '\0')
    {
        return 0;
    }
    
    int l = fun(ar, i+1);
    return l + 1;
}

int main(int argc, char const *argv[])
{
    char ar[13] = "Nisan Hossain";
    int lenth = fun(ar, 0);
    printf("%d\n", lenth);

    
    return 0;
}


//----------------------------

// #include <stdio.h>
// void f2()
// {
//     printf("f1 ");
// }
// void f1()
// {
//     printf("f2 ");
//     f2();
// }
// int main()
// {
//     printf("Main ");
//     f1();
// }

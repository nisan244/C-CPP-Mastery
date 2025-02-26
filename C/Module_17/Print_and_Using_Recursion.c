// #include <stdio.h>

// int fun(int i)
// {
//     if (i == 6)
//     {
//         return;
//     }     
//     printf("%d\n", i);
//     fun(i + 1);
// }

// int main(int argc, char const *argv[])
// {
//     fun(1);

//     return 0;
// }


//----------------------

#include <stdio.h>

void fun(int i)
{
    if (i == 0)
    {
        return;
    }
    
    printf("%d\n", i);
    fun(i-1);
}

int main(int argc, char const *argv[])
{
    fun(10);

    
    return 0;
}

//-------------------------------

// #include <stdio.h>
// void gello()
// {
//     printf("Gello ");
// }
// void hello()
// {
//     gello();
//     printf("Hello ");
// }
// int main()
// {
//     printf("Main ");
//     hello();
// }
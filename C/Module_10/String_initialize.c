// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     char a[10];
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%c", &a[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%c\n", a[i]);
//     }
    
//     return 0;
// }

//-------------------------------------------------------------

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int a[10];
//     printf("%d", sizeof(a));
//     // printf("%d", sizeof(char));
//     return 0;
// }

//-------------------------------------------------------------------

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int ar[5] = {10, 20, 30, 40, 50};
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", ar[i]);
//     }
    
//     return 0;
// }

//----------------------------------------------------------------

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     // char ar[5] = {'a', 'b', 'c', 'd', 'e'};
//     char ar[55] = "Nisan", n[100] = "Ariyan";
//     // for (int i = 0; i < 50; i++)
//     // {
//     //     printf("%s%s", ar, n);
//     // }
//     // Concatenate A and B and print the result
//     strcat(ar, n);
//     printf("%s\n", ar);
    
//     return 0;
// }

//----------------------------------------------------------------

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     char ar[6] = {'a', 'b', 'c', 'd', 'e'};
//     // char ar[6] = "Nisan";
//     // char ar[6] = "Nisan\0";
//         printf("%s\n", ar);
        
    
//     return 0;
// }

//---------------------------------------------------------------


// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     char ar[5];
//     scanf("%s", &ar);
//     // int size = sizeof(ar)/sizeof(char);
//     // printf("%d\n", size);
//     printf("%s\n", ar);

//     return 0;
// }

//-----------------------------------------------------------


// #include <stdio.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     char ar[10];
//     gets(ar);
//     printf("%s", ar);
    
//     return 0;
// }

//-----------------------------------


// #include <stdio.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     char ar[10];
//     fgets(ar, 6, stdin);
//     printf("%s", ar);
    
//     return 0;
// }

//-----------------------------------------------------


// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     char ar[100];
//     scanf("%s", &ar);
//     int count = 0;
//     for (int i = 0; ar[i] != '\0'; i++)
//     {
//         count++;
//     }
    
//     printf("%d\n", count);

//     return 0;
// }


//------------------------------

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     char ar[100];
//     scanf("%s", &ar);
//     int count = 0;
//     int i = 0;
//     while (ar[i] != '\0')
//     {
//         count++;
//         i++;
//     }
//     printf("%d\n", count);

//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     char ar[100];
//     scanf("%s", &ar);
//     int count = 0;
//     int i = 0;
//     int len = strlen(ar);
//     while (ar[i] != '\0')
//     {
//         count++;
//         i++;
//     }
//     printf("%d\n", count);
//     printf("%d\n", len);

//     return 0;
// }


//----------------------------------------

// #include <stdio.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     char ar[1001], t[1001];
//     scanf("%s %s", &ar, &t);

//     int len_ar = strlen(ar);
//     int len_t = strlen(t);

//     printf("%d %d\n", len_ar, len_t);
//     printf("%s %s\n", ar, t);
    
//     return 0;
// }

//---------------------------------------------

// #include <stdio.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     char ar[1000001];
//     fgets(ar, 1000001, stdin);
//     for (int i = 0; ar[i] != '\\'; i++)
//     {
//         printf("%c", ar[i]);
//     }
//     return 0;
// }

//--------------------------------------------

// #include <stdio.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     char ar[1000001];
//     // fgets(ar, 1000001, stdin);
//     scanf("%s", &ar);
//     int sum = 0;
//     for (int i = 0; i < strlen(ar); i++)
//     {
//         // printf("%c\n", ar[i]);
//         // printf("%d\n", ar[i]-48);
//         // printf("%d\n", ar[i]-'0');

//         sum = sum + (ar[i]-'0');
//     }
//     printf("%d", sum);
//     return 0;
// }

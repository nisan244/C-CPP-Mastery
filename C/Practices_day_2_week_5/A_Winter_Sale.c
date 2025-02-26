#include <stdio.h>

int main(int argc, char const *argv[])
{
    int X;
    float P;

    scanf("%d %f", &X, &P);

    float new_value = (P * 100) / (100 - X);

    printf("%0.2f", new_value);

    return 0;
}

//DONE
//Accepted